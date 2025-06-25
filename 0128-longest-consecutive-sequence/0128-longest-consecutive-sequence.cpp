class Solution {
public:
    int fun(int number,unordered_map<int,int>&mp,unordered_map<int,bool>&present){
        if(present.find(number)==0) return 0;
        if(mp[number]>0) return mp[number];
        return mp[number]=1+fun(number+1,mp,present);
    }
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool>present;
        unordered_map<int,int>mp;
        for(int num:nums) present[num]=1;
        int ans = 0;
        int number;
        for(auto num:present){
            number = num.first;
            cout << number << " ";
            ans = max(ans,1+fun(number+1,mp,present));
        }
        return ans;
    }
};