class Solution {
public:
    int findMinDifference(vector<string>& tp) {
        size_t n=tp.size();
        vector<int>a;
        for(int i=0;i<n;i++){
            a.push_back((stoi(tp[i].substr(0,2))*60)+(stoi(tp[i].substr(3,2))));
        }
        sort(a.begin(),a.end());
        int res=3000;
        for(int i=0;i<a.size()-1;i++){
        res=min({res,a[i+1]-a[i],1440-a[i+1]+a[i]});
        }
     
        res=min({res,a[a.size()-1]-a[0],1440-a[a.size()-1]+a[0]});
    return res;
    }
    
};