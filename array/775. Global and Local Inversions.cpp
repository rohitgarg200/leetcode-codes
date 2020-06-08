class Solution {
public:
    bool isIdealPermutation(vector<int>& A) {
        int n=A.size();
        
        for(int i=0;i<n;i++){
            if(abs(i-A[i])>1){
                return 0;
            }
        }
        return 1;
    }
};