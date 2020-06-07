class Solution {
public:
    static bool solve(vector<int>&a,vector<int>&b){
    return a[0]<b[0];
    }
    int maxNumberOfFamilies(int n1, vector<vector<int>>& rs) {
        
        sort(rs.begin(),rs.end(),solve);
//         vector<vector<long long int>>a(n,vector<long long int>(11,0));
//         for(long long int i=0;i<rs.size();i++){
//             a[rs[i][0]-1][rs[i][1]]=1;
            
//         }
        
      long long int res=0;
        int c=0;
        int y=1;
               for(int j=0;j<rs.size();j++){              
                   int n=rs[j][0];
                   res+=(n-y)*2;
                   vector<int>a(11,-1);
                   while( j<rs.size() && n==rs[j][0]){
                       a[rs[j][1]]=1;
                       j++;
                      
                   }
                   //cout<<j;
                   
                   int x=1,y1=1,z=1;
                   for(int i=2;i<=9;i++){
                       if(i>=2 &&i<=5 && a[i]==1){
                           x=0;
                       }
                       if(i>=4 && i<=7 && a[i]==1){
                           y1=0;
                           
                       }
                       if(i>=6 && i<=9 && a[i]==1){
                       z=0; 
                       }
                   }
                   res+=max(x+z,y1);
                   //cout<<res<<endl;
                   j--;
                   y=n+1;
               }
                 //y++;
                 res+=max(0,(n1-y+1)*2);
        
        return res;
    }
};