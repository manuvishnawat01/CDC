class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int, vector<int>> posMap;
        for(int i = 0; i < nums.size(); i++){
            posMap[nums[i]].push_back(i);
        }

        int minAns = -1;

        for(auto& entry : posMap){
            vector<int>& indices = entry.second;
            
            if(indices.size() >= 3){
                for(int i = 0; i <= (int)indices.size() - 3; i++){
                    int currentDist = 2 * (indices[i + 2] - indices[i]);
                    
                    if(minAns == -1 || currentDist < minAns){
                        minAns = currentDist;
                    }
                }
            }
        }

        return minAns;
    }
};