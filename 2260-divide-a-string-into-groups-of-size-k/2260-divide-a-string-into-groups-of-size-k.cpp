class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
    vector<string> ans;
    while(s.size()%k){
        s+=fill;
    }
    string str = "";
    for(int i=0 ; i<s.size(); i++){
        str+=s[i];
        if(str.size()==k){
            ans.push_back(str);
            str = "";
        }
    }
    return ans;
    }
};