class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>a(3,0);
        int k=0;
        for(int i=0;i<nums.size();i++){
            a[nums[i]]++;
            while(a[0]>0){
                nums[k]=0;
                k++;
                a[0]--;
            }
        }
        while(a[1]>0){
            nums[k]=1;
            k++;
            a[1]--;
        }
        while(a[2]>0){
            nums[k]=2;
            k++;
            a[2]--;
        }
    
    }
};