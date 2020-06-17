class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>a;
        for(int i=0;i<nums.size();i++){
            if(a.find(nums[i])==a.end()){
                if(a.find(target-nums[i])==a.end()){
                    a.insert({target-nums[i],i});
                }
                }else{
                vector<int>res;
                res.push_back(a[nums[i]]);
                res.push_back(i);
                return res;
            }
        }
        vector<int>res;
        return res;
    }
};