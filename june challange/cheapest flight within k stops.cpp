class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int K) {
        vector<vector<int>>dist(n,vector<int>(n,-1));
        vector<vector<int>> Graph(n,vector<int>()); 
        vector<int>visit(n,0);
        vector<int> D(n,-1);
        for(int i=0;i<flights.size();i++){
            dist[flights[i][0]][flights[i][1]]=flights[i][2];
            Graph[flights[i][0]].push_back(flights[i][1]);
        }
        queue<int>c;
        c.push(src);
        queue<int>c1;
         queue<tuple<int,int,int>> q;
        q.push({0,src,0});
        D[src] = 0;
        while(!q.empty())
        {
            auto [step,city,dis] = q.front();
            q.pop();
            if (step>=K+1)
                continue;
            for(auto i:Graph[city])
            {
                if ((D[i]==-1 || D[i] >dis+dist[city][i]) )
                {
                    D[i] = dis+dist[city][i];
                    q.push({step+1,i,D[i]});
                }
            }
        }
        return D[dst];
        
//         for(int i=0;i<=K;i++){
//              //vector<vector<int>>a1=a;
//                 while(c.size()!=0){
//                     int k=c.front();
//                     c.pop();
//                     int y=a[src][k];
//               //      cout<<c.size()<<endl;
//                     for(int i=0;i<Graph[i].size();i++){
//                         if(a[k][i]!=INT_MAX && i!=k){
//                             c1.push(i); 
//                         if(i!=k && y!=INT_MAX)
//                         a[src][i]=min(a[src][i],y+a[k][i]);
//                     }
                    
//                     }
//                 }
//            // a=a1;
//             c=c1;
//            // cout<<c.size()<<endl;
//             queue<int>y;
//             c1=y;
//             //cout<<c1.size()<<endl;
//         }
//         if(a[src][dst]==INT_MAX){
//             return -1;
//         }
//         return a[src][dst];
        
        
    }
};