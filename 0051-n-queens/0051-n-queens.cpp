class Solution {
public:
    
    void find(int row, int n, vector<vector<string>>& ans,vector<string> &board,vector<bool>& column, vector<bool>& leftdig, vector<bool>& rightdig){

        if (row == n){
            ans.push_back(board);
            return;
        }
        for(int j  =0 ; j<n; j++){
            if(column[j] == 0 && leftdig[n-1+j-row] == 0 && rightdig[row+j] == 0){
                column[j] = 1;
                board[row][j] = 'Q';
                leftdig[n-1+j-row] = 1;
                rightdig[row+j] = 1;
                find(row+1,n,ans,board,column,leftdig,rightdig);
                column[j] = 0;
                board[row][j] = '.';
                leftdig[n-1+j-row] = 0;
                rightdig[row+j] = 0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
            vector<vector<string>> ans;
            vector<string> board(n);
            for(int i =0; i<n; i++){
                for(int j =0; j<n; j++){
                    board[i].push_back('.');
                }
            }
            vector<bool> leftdig(2*n-1,0);
            vector<bool> rightdig(2*n-1,0);

            vector<bool>column(n,0);

            find(0,n,ans,board,column,leftdig,rightdig);
            return ans;
    }
};