class Solution {
public:
    bool isVowel(char c) {
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
                c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    }

    string sortVowels(string s) {
        string v;

        for(char c : s) {
            if(isVowel(c)) v.push_back(c);
        }

        sort(v.begin(), v.end());

        string t = "";
        int j = 0;
        for(char c : s) {
            if(isVowel(c)) {
                t.push_back(v[j++]); 
            } else {
                t.push_back(c);
            }
        }
        
        return t;
    }
};
