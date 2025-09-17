class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> m;
        int maxi =-1;
        for(int i = 0; i<arr.size(); i++){
            m[arr[i]]++;
        }
        for(auto a : m){
            if(a.first == a.second) maxi = max(a.first,maxi);
        }
        return maxi;
    }
};