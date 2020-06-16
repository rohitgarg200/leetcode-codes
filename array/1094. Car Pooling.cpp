class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        map<int,int>a;
        for(int i=0;i<trips.size();i++){
        if(a.find(trips[i][1])==a.end()){
            a.insert({trips[i][1],trips[i][0]});
        }else{
            a[trips[i][1]]+=trips[i][0];
        }
            if(a.find(trips[i][2])==a.end()){
                a.insert({trips[i][2],-trips[i][0]});
            }else{
                a[trips[i][2]]-=trips[i][0];
        }
        }
        int c=0;
        for(auto i=a.begin();i!=a.end();i++){
            c+=i->second;
            if(c>capacity){
            return 0;    
            }
        }
        return 1;
    }
};