class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        if(nums.size()==0){
            return ans;
        }
        string arrow="->";
        int start=nums[0];
        int end=nums[0];
        int k=0;
        //iterate till last
        for(int i=1;i<nums.size();i++){
         if(nums[i]==end+1)   
         {
             end++;   
         }
        else{
         if(start==end){
            ans.push_back(to_string(start));
            start=nums[i];
            end=nums[i];
            k++;
         }else{
             ans.push_back(to_string(start));
             ans[k]+=arrow;
             ans[k]+=to_string(end);
             start=nums[i];
             end=nums[i];
             k++;
         }
         }
        }
        //insert last case
         if(start==end){
           ans.push_back(to_string(start));
        }
        else{
             ans.push_back(to_string(start));
             ans[k]+=arrow;
             ans[k]+=to_string(end);
                
        }
        
        return ans;
        
    }
};
