class Solution {
public:
    static bool solve(vector<int>&a,vector<int>&b){
        return a[0]<b[0];
    }
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        vector<vector<int>>a(people.size(),vector<int>(2,-1));
        sort(people.begin(),people.end(),solve);
        for(int i=0;i<people.size();i++){
            int temp=people[i][0];
            int temp1=people[i][1];
            int temp2=temp1;
            int m=0;
            for(int j=0;j<temp1;j++){
                if(j<temp1&&(a[j][0]==temp || a[j][0]==-1)){
                }
                else{
                    temp1++;
                }
            }
    
            while(temp1<people.size()){
                if(a[temp1][0]==-1){
                    a[temp1][0]=temp;
                    a[temp1][1]=temp2;
                    break;
                }
                else{
                    temp1++;
                }
            }
            
              
        }
        return a;
        
    }
};