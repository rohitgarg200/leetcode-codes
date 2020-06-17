class Solution {
public:
    string findipv4(string &ip){
        int count = 0,dots = 0;
        for(int i = 0; ip[i] != '\0'; i++){
            int k = 0,fg = 0;
            int j = i;
            while(ip[j]!='.' && ip[j] != '\0'){
                if(fg == 0){
                    count++;//counting the numbers occured how many times
                    fg = 1;
                }
                if( ip[j] > 57 || ip[j] < 48 )//checking range
                    return "Neither";
                k = ( k * 10 ) + ip[j] - 48;//calculating for range of 0-255
                j++;
            }
            if(ip[j] == '.')
                dots++;
            if(k>255 || k < 0 || ( ip[i] == '0' && j-i != 1 )|| j - i > 3 || j-i == 0  )//conditions which make ipv4 invalid
                return "Neither";
            i = j;
            if(ip[j] == '\0')
                break;  
        }
        if(count != 4 || dots != 3)
            return "Neither";
        return "IPv4";
    }
    //same as upper
    string findipv6(string &ip){
        int count = 0,dots = 0;
        for(int i = 0; ip[i] != '\0'; i++){
            int j = i,fg = 0;
            while(ip[j] != ':' && ip[j] != '\0'){
                if(fg == 0){
                    count++;
                    fg = 1;
                }
                int x = ip[j];
                if( ( x > 57 || x < 48 )  && ( x < 65 || x > 70  ) && ( x < 97 || x > 102  ) )
                    return "Neither";
                j++;
            }
            if(ip[j] == ':')
                dots++;
            if( (j-i > 4) || (j-i == 0) ){
                return "Neither";   
            }
            i = j;
            if(ip[j] == '\0')
                break;                 
        }
        if( count != 8 || dots != 7 ){
            return "Neither";}
        return "IPv6";
    }
    string validIPAddress(string IP) {
        string output = "Neither";
        for(int i = 0 ; IP[i] != '\0'; i++){
            if(IP[i] == '.'){
                output = findipv4(IP);
                break;
            }
            if(IP[i] == ':'){
                output = findipv6(IP);
                break;
            }
            if(i > 4){
                output = "Neither";
                break;
            }
        }
        return output;
    }
};