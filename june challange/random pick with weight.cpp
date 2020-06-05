class Solution {
public:
    vector<int>a;
    unordered_map<int,int>b;
    int value;
    
    Solution(vector<int>& w) {
        value=0;
        for(int i=0;i<w.size();i++){
            
            value+=w[i];
            a.push_back(value);
            b.insert({value,i});
            
        }
        
    }
    
    int pickIndex() {
        int k=rand();
        if(a.size()>=1){
        k=k%(value);
       return b[*upper_bound(a.begin(),a.end(),k)];
        }
        else{
        return 0;    
        }
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */