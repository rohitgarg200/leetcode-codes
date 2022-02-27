class Solution {
public:
    vector<int>original;
    Solution(vector<int>& nums) {
        
    
        for(int i=0;i<nums.size();i++){
            original.push_back(nums[i]);
        }
    }
    
    vector<int> reset() {
    return original;        
    }
    
    vector<int> shuffle() {
         vector<int>shuffled;
        map<int,bool>check;
        for(int i=0;i<original.size();i++)
        {
            int ran=rand()%original.size();
            while(check.find(ran)!=check.end()){
                ran=rand()%original.size();
            }
            check.insert({ran,1});
            shuffled.push_back(original[ran]);
            
        }
        return shuffled;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */
