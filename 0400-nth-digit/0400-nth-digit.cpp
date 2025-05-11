class Solution {
public:
    int findNthDigit(int n) {
        int start=1;
        int length=1; 
        long long count = 9;
        while(n>count*length){
            n-=count*length;
            start*=10;
            length+=1;
            count*=10;
        }
        start+=(n-1)/length;
        string s=to_string(start);
        return (s[(n-1)%length])-'0';
    
    }
};