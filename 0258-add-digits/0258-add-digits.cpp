class Solution {
public:
    int addDigits(int num) {
      int sum=0;
      int ld;
        while(num){
            ld=num%10;
            sum=sum+ld;
            num/=10;
        }
        if(sum<10)
            return sum;
        else
            return addDigits(sum);
    }
};