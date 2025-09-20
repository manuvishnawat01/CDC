class Solution {
public:
    int countSubarrays(vector<int>& arr) {
        int n = arr.size();
        if(n<3) return 0;
        int count = 0;
        for(int i =0; i<n-2; i++){
            if(2*(arr[i] + arr[i+2]) == arr[i+1]) count++;
        }
        return count;
    }
};