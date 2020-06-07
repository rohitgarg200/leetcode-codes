class Solution {
public:
    int maxArea(int l, int w, vector<int>& h, vector<int>& v) {
        sort(h.begin(),h.end());
        sort(v.begin(),v.end());
        long long int max1=0,max2=0;
        for(int i=0;i<h.size()-1;i++){
            if( i+1<h.size() && max1<h[i+1]-h[i]){
                max1=h[i+1]-h[i];
                
            }
        }
         for(int i=0;i<v.size()-1;i++){
            if( i+1<v.size() && max2<v[i+1]-v[i]){
                max2=v[i+1]-v[i];
                
            }
        }
        if(max1<h[0]){
            max1=h[0];
        }
        //max1=max(max1,h[0]-0);
        if(max1<l-h[h.size()-1]){
            max1=l-h[h.size()-1];
        }
       // max1=max(max1,l-h[h.size()-1]);
        if(max2<v[0]){
            max2=v[0];
        } 
        //max2=max(max2,v[0]-0);
        if(max2<w-v[v.size()-1]){
            max2=w-v[v.size()-1];
        }
        //max2=max(max2,w-v[v.size()-1]);
        long long int k=((max2%1000000007)*(max1%1000000007))%1000000007;
        return k;
        
    }
};