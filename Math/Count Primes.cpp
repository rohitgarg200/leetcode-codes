class Solution {
public:
    int countPrimes(int n) {
  
        if(n<=1){
        return 0;
        }

        vector<int>check(n,0);
        
        n=n-1;
        for(int i=3;i<=n/3;i+=2){
        for(int j=3;j<=n/i;j+=2){
            check[i*j]=1;
        }
    }
    int ans=n>=2?1:0;
        for(int i=3;i<=n;i+=2){
        if(!check[i]){
            ans++;
        }    
        }
        return ans;
        
        
        
    }
};
