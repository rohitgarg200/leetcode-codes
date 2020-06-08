class Solution {
public:
       vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        vector<vector<int>>res(matrix.size(),vector<int>(matrix[0].size(),INT_MAX-10000));
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    res[i][j]=0;
                }else{
                    if(i>0){
                        res[i][j]=min(res[i][j],1+res[i-1][j]);
                    }
                    if(j>0){
                        res[i][j]=min(res[i][j],1+res[i][j-1]);
                    }
                }
            }
        }
        
    for(int i=matrix.size()-1;i>=0;i--){
        for(int j=matrix[0].size()-1;j>=0;j--){
            if(i<matrix.size()-1){
                res[i][j]=min(res[i][j],1+res[i+1][j]);
            }
              if(j<matrix[0].size()-1){
                res[i][j]=min(res[i][j],1+res[i][j+1]);
            }
        }
    }    
        
        
    return res;
        
    }
};