class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(auto m : s){
            mp[m]++;
        }
        int count = 0;
        bool flag = true;
        for(auto m : mp){
            if(m.second % 2 == 0) count = count+m.second;
            else{
                count = count + m.second-1;
                flag = false;
            }
        }
        if(flag == false) count++;
        return count;
    }
};