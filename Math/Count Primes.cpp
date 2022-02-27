class Solution {
public:
    int countPrimes(int n) {
  
        if(n<=1){
            return 0;
        }
//create an array to store number status
        vector<bool>check(n,0);
        
        n=n-1;
        // here check only odd numbers 
        for(int i=3;i<=sqrt(n);i+=2){
            for(int j=3;j<=n/i;j+=2){
              check[i*j]=1;
        }
    }
    int ans=n>=2?1:0;
        //finding prime numbers
        for(int i=3;i<=n;i+=2){
            if(!check[i]){
                ans++;
            }    
        }
        return ans;
        
        
        
    }
};
