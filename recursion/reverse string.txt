using namespace std;
class Solution{
public:
    void reve(vector<char>& s,int left,int right){
        if(left<=right){
            char temp=s[left];
            s[left]=s[right];
            s[right]=temp;
            left++;
            right--;
            reve(s,left,right);
        }
        return;
        
    }
    
    void reverseString(vector<char>& s) {
        reve(s,0,s.size()-1);
        
        
    }
};