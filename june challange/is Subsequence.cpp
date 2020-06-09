class Solution {
public:
    bool isSubsequence(string s, string t) {
        vector<vector<int>>a(s.size()+1,(vector<int>(t.size()+1,0)));
        for(int i=1;i<=s.size();i++){
            int c=0;
            for(int j=1;j<=t.size();j++){
                if(s[i-1]==t[j-1]){
                    a[i][j]=1+a[i-1][j-1];
                    c=1;
                }
                else{
                    a[i][j]=max(a[i-1][j],a[i][j-1]);
                }
            }
            if(c==0){
               return 0;
            }
        }
        if(a[s.size()][t.size()]==s.size()){
            return 1;
            
        }
        return 0;
        
        
    }
};