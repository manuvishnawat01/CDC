class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.size() == 1) return nums;
        int mid = nums.size() / 2;

        vector<int> left(nums.begin(), nums.begin() + mid);
        vector<int> right(nums.begin() + mid, nums.end());

        left = sortArray(left);
        right = sortArray(right);

        return merge(left, right);
    }

    vector<int> merge(vector<int>& left, vector<int>& right) {
        vector<int> res;
        int i = 0, j = 0;

        while (i < left.size() && j < right.size()) {
            if (left[i] < right[j]) res.push_back(left[i++]);
            else res.push_back(right[j++]);
        }

        while (i < left.size()) res.push_back(left[i++]);
        while (j < right.size()) res.push_back(right[j++]);

        return res;
    }
};