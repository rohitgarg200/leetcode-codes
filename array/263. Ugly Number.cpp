class Solution {
public:
    bool isUgly(int num) {
        if(num<=0){
            return 0;
        }
        while(abs(num)>1){
            if(num%2==0){
                num=num/2;
            }else if(num%3==0){
                num=num/3;
            }
            else if(num%5==0){
                num=num/5;
            }else{
                return 0;
            }
        }
        return 1;
    }
};