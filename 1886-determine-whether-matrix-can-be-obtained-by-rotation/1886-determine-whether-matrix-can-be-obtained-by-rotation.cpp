class Solution {
public:

    void rotate(vector<vector<int>>& mat) {
        int n = mat.size();

        // Step 1: Transpose
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                swap(mat[i][j], mat[j][i]);
            }
        }

        // Step 2: Reverse each row
        for(int i = 0; i < n; i++){
            int start = 0, end = n - 1;
            while(start < end){
                swap(mat[i][start], mat[i][end]);
                start++;
                end--;
            }
        }
    }

    bool check(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] != target[i][j]) return false;
            }
        }
        return true;
    }

    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i = 0; i < 4; i++){
            if(check(mat, target)) return true;
            rotate(mat);
        }
        return false;
    }
};