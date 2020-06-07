class Solution {
public:
    int change(int amount, vector<int>& coins) {
        sort(coins.begin(),coins.end());
        
        vector<vector<int>>a(coins.size()+1,vector<int>(amount+1,0));
        a[0][0]=1;
        for(int i=1;i<=coins.size();i++){
            a[i][0]=1;
                int temp=coins[coins.size()-i];
           
           // cout<<a[i][amount]<<endl;
             for(int j=1;j<=amount;j++){
                 if(j-temp>=0){
                     if(a[i-1][j]>0){
                         a[i][j]=a[i][j-temp]+a[i-1][j];
                     }else{
                         a[i][j]=a[i][j-temp];
                     }
                 }           
              
            }
           
        }
        return a[coins.size()][amount];
    }
};