class Solution {
public:
    bool judgeCircle(string moves) {
        int left = 0;
        int right = 0;
        int up = 0;
        int down  = 0;
        for(auto m : moves){
            if(m == 'L') left++;
            else if(m == 'R') right++;
            else if(m == 'U') up++;
            else down++;
        }

        if(left == right && up == down) return true;
        return false;
    }
};