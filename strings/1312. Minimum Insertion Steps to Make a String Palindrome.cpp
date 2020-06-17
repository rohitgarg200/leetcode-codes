class Solution {
public:
    int minInsertions(string s) {
        if(s.size()<=1){
            return 0;
        }
        vector<vector<int>>a(s.size()+1,vector<int>(s.size()+1));
        string t=s;
        reverse(t.begin(),t.end());
        for(int i=1;i<=s.size();i++){
            for(int j=1;j<=s.size();j++){
            if(s[i-1]==t[j-1]){
            a[i][j]=1+a[i-1][j-1];    
            }else{
                a[i][j]=max(a[i-1][j],a[i][j-1]);
            }    
            }
        }
        return s.size()-a[s.size()][s.size()];
        
    }
};