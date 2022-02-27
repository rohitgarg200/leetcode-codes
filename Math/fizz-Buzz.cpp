class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans(n);

        int i=1;
        while(i<=n/3){
            ans[3*i-1]="Fizz";
            i++;
        }i=1;
         while(i<=n/5){
            ans[5*i-1]+="Buzz";
            i++;
        }
        for(int i=1;i<=n;i++){
            if(ans[i-1]==""){
                ans[i-1]+=to_string(i);
            }
        }
        return ans;
        
    }
};
