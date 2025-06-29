class Solution {
public:
    bool isPrime(int n) {
        if (n <= 1)
            return false;
        if (n == 2 || n == 3)
            return true;
        if (n % 2 == 0 || n % 3 == 0)
            return false;

        for (int i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0)
                return false;
        }
        return true;
    }

    vector<int> constructRectangle(int area) {
        int root = sqrt(area);
        if(root* root == area) return {root, root};

        if(isPrime(area)) return {area, 1};
        root+=1;

        while(root<area){
            int ans = area/root;
            if(root * ans == area){
                return {root, ans};
            }
            else{
                root++;
            }
        }
        return {};

    }
};