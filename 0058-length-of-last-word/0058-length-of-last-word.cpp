class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int i = n-1;
        while (s[i] == ' ' && n >= 0){
            i--;
        }
        int start = i;
        while(start >= 0 && s[start] != ' '){
            start--;
        }
        return i-start;
    }
};