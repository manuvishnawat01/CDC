class Solution {
public:
    int mostWordsFound(vector<string>& sentences){
        int maxi = 0;
        for(int i = 0; i < sentences.size(); i++){
            int j = 0;
            int count = 1; 
            while(j < sentences[i].size()){
                if(sentences[i][j] == ' ') count++;
                j++;
            }
            maxi = max(count,maxi);
        }
        return maxi;
    }
};
