class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0){
            return 0;
        }
        
        
        if(floor(log2(n))==ceil(log2(n))){
            return 1;
        }
        return 0;
  // below approach i think about first bit manipulation than divide and after this immediately i get strike idea
 //       of using log
//         if(n==0){
//         return 0;}
//         int count=0;
//         if(n<0){
//             n=-n;
//             count=1;
// }
//         int res=0;
//         int t=0;
//         while(n>0){
//             if(n%2!=0){
//                 res++;
//             }
//             t++;
//             n=n/2;
            
            
//             if(res>1){
//                 return 0;
//             }
            
//         }
//         if(t%2==0 && count==1){
//             return 0;
//         }
//         return 1;
        
    }
};