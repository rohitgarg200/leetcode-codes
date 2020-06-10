class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int,string>a;
        a.insert({1,"I"});
        a.insert({5,"V"});
        a.insert({10,"X"});
        a.insert({50,"L"});
        a.insert({100,"C"});
        a.insert({500,"D"});
        a.insert({1000,"M"});
        a.insert({4,"IV"});
        a.insert({9,"IX"});
        a.insert({40,"XL"});
        a.insert({90,"XC"});
        a.insert({400,"CD"});
        a.insert({900,"CM"});
        
        string temp="";
        while(num>0){
            if(num>1){
            int k1=floor(log(num)/log(10));
               // cout<<k1<<endl;
            int k=num/pow(10,k1);
                int t=k;
            if(a.find(k*pow(10,k1))!=a.end()){
                temp+=a[k*pow(10,k1)];
            }else{
                string temp1="";
                while(k!=0){
                    if(a.find(k*pow(10,k1))!=a.end()){
                        temp1+=a[k*pow(10,k1)];
                        break;
            }else{
                        temp1+=a[pow(10,k1)];
                        //cout<<k;
                        k--;
                    }
        
                    
            }
                reverse(temp1.begin(),temp1.end());
                temp+=temp1;
            }
                num=num-t*pow(10,k1);
            }
            else{
                if(num==1){
                    temp+='I';
                    num=0;
                }else{
                    break;
                }
            }
            
            
        }
        
        
return temp;
    }
};