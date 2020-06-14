class Solution {
public:
    int longestOnes(vector<int>& A, int k) {
        if(A.size()==0){
        return 0;    
        }
        
        int count=0;
        int start=0;
        int res=0;
        for(int i=0;i<A.size();i++){
            if(A[i]==0){
                count++;
            }
            while(count>k && start<A.size()){
                if(A[start]==0){
                    count--;
                    
                }
                start++;
            }
            res=max(res,i-start+1);
        }
        return res;
// below approach give me tle error        
//         vector<vector<int>>dp(A.size(),(vector<int>(k+1,0)));
//         int l=0;
//         int large=0;
//         if(A[0]==1){
//             dp[0][0]=1;
//         }else{
//             if(k>=1){
//             dp[0][1]=1;
//             l++;}
//         }
//         for(int i=1;i<A.size();i++){
//             if(A[i]==1){
                
//                 for(int j=0;j<=l && j<=k;j++){
//                     dp[i][j]=1+dp[i-1][j];
//                     large=max(large,dp[i][j]);
//                 }
//             }else{
//                 l++;
//                 for(int j=0;j<l && j<k;j++){
//                     dp[i][j+1]=1+dp[i-1][j];
//                     large=max(large,dp[i][j+1]);
//                     }
                
//             }
//         }
//         return large;
    }
};