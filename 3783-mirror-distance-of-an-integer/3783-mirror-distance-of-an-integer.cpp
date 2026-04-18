class Solution {
public:
    int mirrorDistance(int n) {
        int m = n;
        int ld = 0;
        int r= 0;
        while(n>0){
            ld = n %10;
            r = r*10 + ld;
            n=n/10;
        }
        return abs(r-m);
    }
};