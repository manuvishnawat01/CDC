class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        return targetCapacity == 0 || 
               (jug1Capacity + jug2Capacity >= targetCapacity &&
                targetCapacity % gcd(jug1Capacity, jug2Capacity) == 0);
    }

private:
    int gcd(int a, int b) {
        if (b == 0) return a;
        return gcd(b, a % b);
    }
};