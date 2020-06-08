class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        for(int j=0;j<32;j++){
            int x=1<<j;
            int sum=0;
            for(int i=0;i<nums.size();i++){
                if(nums[i]&x){
                    sum++;
                    }
            
        }
            if(sum%3){
                result=result|x;
            }
        }
        return result;
        
    }
};