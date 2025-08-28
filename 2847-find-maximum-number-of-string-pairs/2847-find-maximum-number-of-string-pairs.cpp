class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int count = 0;
        unordered_set<string> set;
        for(int i = 0; i<n; i++){
           set.insert(words[i]);
        }

        for(int i =0; i<n; i++){
            string rev = words[i];
            reverse(rev.begin(),rev.end());
            if(words[i]==rev) continue;
            if(set.find(rev) != set.end()){
                count++;
                set.erase(words[i]);
            }
        }
        return count;
    }
};