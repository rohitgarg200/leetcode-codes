class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        //vector<int>a((matrix.size()-1)*4,-1000);
        int i=-1;int j=-1;
        for(int n=matrix.size()-1;n>i;n=n-1){
            i++;
            j++;
            vector<int>a;
            for(int k=j;k<=n;k++){
                a.push_back(matrix[n][k]);
            }
            for(int k=n-1;k>=i;k--){
                a.push_back(matrix[k][n]);
            }
            for(int k=n-1;k>=i;k--){
                a.push_back(matrix[i][k]);
            }
            for(int k=j+1;k<n;k++){
                a.push_back(matrix[k][j]);
            }
            int y=0;
            for(int k=i;k<=n;k++){
                matrix[k][i]=a[y];
                y++;
            }
            for(int k=i+1;k<=n;k++){
                matrix[n][k]=a[y];
                y++;
                
            }
            for(int k=n-1;k>=i;k--){
                matrix[k][n]=a[y];
                y++;
            }
            for(int k=n-1;k>i;k--){
                matrix[i][k]=a[y];
                y++;
            }
            
            
            
            
            
        }
        
        //return matrix;
    }
};