class Solution {
public:
    int divisibleGame(vector<int>& nums) {

        const long long MOD = 1000000007;

        set<int> divisors;

        // k = 2 is always a valid choice
        divisors.insert(2);

        for(int x : nums)
        {
            if(x > 1)
                divisors.insert(x);

            for(int d = 2; d * d <= x; d++)
            {
                if(x % d == 0)
                {
                    divisors.insert(d);
                    divisors.insert(x / d);
                }
            }
        }

        long long bestScore = LLONG_MIN;
        int bestK = 2;

        for(int k : divisors)
        {
            if(k <= 1)
                continue;

            long long current = 0;
            long long score = LLONG_MIN;

            for(int x : nums)
            {
                long long value;

                if(x % k == 0)
                    value = x;
                else
                    value = -x;

                current = max(value, current + value);
                score = max(score, current);
            }

            if(score > bestScore ||
               (score == bestScore && k < bestK))
            {
                bestScore = score;
                bestK = k;
            }
        }

        long long ans = (bestScore % MOD + MOD) % MOD;

        ans = (ans * bestK) % MOD;

        return ans;
    }
};