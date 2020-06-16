class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        int s = nums.size();
        
        int start = s-1;
        int ms = INT_MIN;
        sort(nums.begin(),nums.end());
        vector<pair<int,int>> dp(s,{1,-1});
        for(int i=s-1; i>=0; i--){
           // int tmp = 1;
            for(int j=i+1; j<s; j++){
                if((nums[j] % nums[i])==0){
                    if(dp[j].first + 1 > dp[i].first){
                        dp[i].first = dp[j].first + 1;
                        dp[i].second = j;
                    }
                }
            }
            if(dp[i].first > ms){
                start = i;
                ms = dp[i].first;
            }
        }
        vector<int> ret;
        while(start != -1){
            ret.push_back(nums[start]);
            start = dp[start].second;
        }
        return ret;
    }
        
        
        
        
        
    
};