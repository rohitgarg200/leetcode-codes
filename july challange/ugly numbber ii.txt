class Solution {
public:
    int nthUglyNumber(int n) {
              
        map<long long int,int>b;
       
        
       
        b.insert({1,1});
        long long int ret=0;
        if(n==1){
        return 1;        
        }
        for(auto ip=b.begin();ip!=b.end();ip++){
        long long int t=ip->first;
            ret++;
            if(n==ret){
                return t;
            }
            if(b.find(2*t)==b.end()){
                b.insert({2*t,1});
                
            }
            if(b.find(3*t)==b.end()){
                b.insert({3*t,1});
                             }
            if(b.find(5*t)==b.end()){
                b.insert({5*t,1});
                             }
            
            
            
            
        }
        
        return (--b.end())->first;
    }
};