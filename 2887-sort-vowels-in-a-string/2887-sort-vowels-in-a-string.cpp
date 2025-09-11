class Solution {
public:
    string sortVowels(string s) {
        string a;
        for(int i=0; i<s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || 
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                a.push_back(s[i]);
            }
        }
        sort(a.begin(),a.end());
        string t = s;
        int j =0;
        for(int i =0 ;i<s.size(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || 
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                t[i] = a[j++];
            }
            else{
                t[i] = s[i];
            }
        }
        return t;
    }
};