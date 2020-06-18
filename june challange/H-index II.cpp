class Solution {
public:
    int hIndex(vector<int>& citations) {
        if(citations.size()==0){
        return 0;    
        }
        int large=0;
        int n=citations.size();
        for(int i=0;i<n;i++){

        if(citations[i] >=n-i){
        return n-i;
        }
        }
        return large;
//         if(citations.size()==1){
//         if(citations[0]<=0){
//             return 0;
//         }    
//             return 1;
//         }
//         int start=0;
//         int end=citations.size()-1;
//         int mid=0;
//         while(start<end){
//             mid=(start+end+1)/2;
            
            
//             if(citations[mid]<mid+1){
//             end=mid-1;        
//             }else if(citations[mid]>mid+1){
//                 start=mid+1;
//             }
//             else{
//                 return citations[mid];
//             }
//         }
//         return ;
        
    }
};