class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i<n; i++){
            unordered_set<int> row;
            for(int j =0; j<n; j++){
                int num = matrix[i][j];

                if(num < 1 || num > n) return false;

                if(row.count(num)) return false;

                row.insert(num);
            }
        }

        for(int j = 0; j<n; j++){
            unordered_set<int> col;
            for(int i = 0; i<n; i++){
                int num = matrix[i][j];

                if(num < 1 || num > n) return false;
                
                if(col.count(num)) return false;

                col.insert(num);
            }
        }
        return true;
    }
};