class Solution {
public:
    
    bool isVowel(char ch){
        if(ch== 'a' || ch== 'e' || ch== 'i' || ch== 'o' || ch== 'u') return true;
        return false;
    }
    int maxFreqSum(string s) {
        unordered_map<char,int> c;
        unordered_map<char,int> v;
        for(auto ch : s){
            if(isVowel(ch)) v[ch]++;
            else c[ch]++;
        }
        int maxconstant = 0 ;
        int maxvowel = 0;   
            for (auto ch : c) {
                    if (ch.second > maxconstant) {
                        maxconstant = ch.second;
                    }
                }
            for (auto ch : v) {
            if (ch.second > maxvowel) {
                maxvowel = ch.second;
                }
            }
        return  maxconstant + maxvowel;
    }
};