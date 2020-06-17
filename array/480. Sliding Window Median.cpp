class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        
        vector<double>res;
        if(k==0){
            return res;
        }
        multiset<int>a;
        for(int i=0;i<k;i++){
                a.insert(nums[i]);
        }
        auto m=next(a.begin(),(k-1)/2);
        if(k%2!=0){
            res.push_back(*m/(1.0));
        }else{
            res.push_back(((*m/1.0) + *next(a.begin(),(k+1)/2)/1.0)/2.0);
        }
        //cout<<a.size()<<endl;
        for(int i=k;i<nums.size();++i){
            a.erase(a.lower_bound(nums[i-k]));
            a.insert(nums[i]);
            auto m=next(a.begin(),(k-1)/2);
        if(k%2!=0){
            res.push_back(*m/(1.0));
        }else{
            res.push_back(((*m/1.0) + *next(a.begin(),(k+1)/2)/1.0)/2.0);
        }
        }
        return res;
    }
};