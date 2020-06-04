class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<=1){
return s;}
        string temp="";
        //int i=0;
        if(numRows>2){
        for(int i=2;i<numRows;i++){
            int j=i-1;
            int count=0;
            while(j<s.size()){
                if(count==0){
                temp+=s[j];
                    count=1;
                    j=j+2*(numRows-i);
                }
                else{
                    temp+=s[j];
                    count=0;
                    j=j+2*(i-1);
                }
                
            }
            
            
        }}
        string temp1="";
        int i=0;
        while(i<s.size()){
            temp1+=s[i];
            i=i+2*(numRows-1);
        }
        temp1=temp1+temp;
        i=numRows-1;
        while(i<s.size()){
            temp1+=s[i];
            i=i+2*(numRows-1);
        }
        return temp1;
        
    }
};