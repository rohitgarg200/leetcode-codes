class Solution {
public:
    int m,n;
    void doit(vector<vector<char>>& board, int si, int ei, vector<vector<bool>> &visited){
        visited[si][ei] = true;
        if(si-1 >= 0 && board[si-1][ei] == 'O' && !visited[si-1][ei] ){
                doit(board,si-1,ei,visited);
            }
        if(ei-1 >= 0 && board[si][ei-1] == 'O' && !visited[si][ei-1] ){
                doit(board,si,ei-1,visited);
            }
        if(si+1 < m && board[si+1][ei] == 'O' &&  !visited[si+1][ei] ){
                doit(board,si+1,ei,visited);
            }
        if(ei+1 < n && board[si][ei+1] == 'O' &&  !visited[si][ei+1] ){
                doit(board,si,ei+1,visited);
            }
    }
    void solve(vector<vector<char>>& board) {
        m = board.size();
        
        if(m==0){
        return ;}
        vector<vector<bool> > visited(board.size(), vector<bool>(board[0].size(), false) );
        
        n = board[0].size();
        for(int i = 0; i < n; i++){
            if(board[0][i] == 'O' && !visited[0][i])
                doit(board,0,i,visited);                //first row
            if(board[m-1][i] == 'O' && !visited[m-1][i])
                doit(board,m-1,i,visited);              //last row
        }
        for(int i = 0; i < m; i++){
            if(board[i][0] == 'O' && !visited[i][0])
                doit(board,i,0,visited);                //first column
            if(board[i][n-1] == 'O' && !visited[i][n-1])
                doit(board,i,n-1,visited);              //last column
        }
        for(int i = 1; i < board.size(); i++)
            for(int j = 1; j < board[0].size(); j++)
                if(board[i][j] == 'O' && !visited[i][j])
                    board[i][j] = 'X';
    }
};