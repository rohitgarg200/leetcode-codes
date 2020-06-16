class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size()<=1){
            return 0;
        }
        vector<int>a(nums.size()+1,10);
        int i=0;
        int count=0;
        while(i<nums.size()){
            int large=0;
            int c=nums[i];
            count++;
            int index=i;
            if(i+c>=nums.size()-1){
                return count;
            }
            for(int j=i;j<=i+c;j++){
              
                if(large<j+nums[j]){
                large=j+nums[j];
                index=j;
                }
                }
            
            i=index;
            
        }
        return count;
        
        
    }
};