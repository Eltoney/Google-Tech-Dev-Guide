class Solution {
    
    int sqSum(int n) {
        int sum = 0;
        while (n) {
            int x = n % 10;
            n /= 10;
            sum += x * x;
        }
        return sum;
    }

    bool naive(int n) {
        int sum = sqSum(n);
        int cnt = 100;
        while (sum != 1 && cnt) {
            sum = sqSum(sum);
            cnt--;
        }
        return (sum == 1);
    }
    
public:
    bool isHappy(int n) {
        return naive(n);
    }
};
