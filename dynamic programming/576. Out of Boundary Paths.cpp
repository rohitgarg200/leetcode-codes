class Solution {
public:
    int findPaths(int m, int n, int N, int i, int j) {
        vector<vector<int>>dp(m,vector<int>(n,0));
        int count=0;
        int mo=1000000000+7;
        dp[i][j]=1;
        for(int i=1;i<=N;i++){
            vector<vector<int>>a(m,vector<int>(n,0));
            for(int j=0;j<m;j++){
                for(int k=0;k<n;k++){
                    if(j==m-1){
                        count=(count+dp[j][k])%mo;
                    }
                     if(j==0){
                        count=(count+dp[j][k])%mo;
                    }
                     if(k==n-1){
                        count=(count+dp[j][k])%mo;
                    }
                     if(k==0){
                        count=(count+dp[j][k])%mo;
                    }
                    if(j+1<m){
                        a[j][k]+=dp[j+1][k];
                         a[j][k]=a[j][k]%mo;
                    }
                    if(j-1>=0){
                        a[j][k]+=dp[j-1][k];
                         a[j][k]=a[j][k]%mo;
                    }
                    if(k+1<n){
                        a[j][k]+=dp[j][k+1];
                         a[j][k]=a[j][k]%mo;
                    }
                    if(k-1>=0){
                        a[j][k]+=dp[j][k-1];
                         a[j][k]=a[j][k]%mo;
                    }
                    
                    a[j][k]=a[j][k]%mo;
                    
                    
                }
               
            }
             dp=a;
            
        }
        return count;
        
    }
};