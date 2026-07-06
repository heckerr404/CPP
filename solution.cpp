class Solution {
public:
    int isPerfect(int N) {
        int original = N;
        int sum = 0;

        while(N > 0) {
            int digit = N % 10;

            int fact = 1;
            for(int i = 1; i <= digit; i++) {
                fact *= i;
            }

            sum += fact;
            N /= 10;
        }

        if(sum == original)
            return 1;
        else
            return 0;
    }
};
