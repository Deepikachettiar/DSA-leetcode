class Solution {
public:

    struct SegTree {
        int n;
        vector<int> tree;

        SegTree(vector<int>& a) {
            int sz = a.size();

            n = 1;
            while(n < sz)
                n *= 2;

            tree.assign(2 * n, 0);

            for(int i = 0; i < sz; i++)
                tree[n + i] = a[i];

            for(int i = n - 1; i >= 1; i--)
                tree[i] = gcd(tree[2 * i], tree[2 * i + 1]);
        }

        int query(int l, int r) {
            if(l > r)
                return 0;

            l += n;
            r += n;

            int ans = 0;

            while(l <= r)
            {
                if(l % 2 == 1)
                    ans = gcd(ans, tree[l++]);

                if(r % 2 == 0)
                    ans = gcd(ans, tree[r--]);

                l /= 2;
                r /= 2;
            }

            return ans;
        }

        int findBad(int node, int nl, int nr,
                    int l, int r, int x) {

            if(nr < l || nl > r)
                return -1;

            if(tree[node] % x == 0)
                return -1;

            if(nl == nr)
                return nl;

            int mid = (nl + nr) / 2;

            int res = findBad(node * 2,
                              nl, mid,
                              l, r, x);

            if(res != -1)
                return res;

            return findBad(node * 2 + 1,
                           mid + 1, nr,
                           l, r, x);
        }

        int findBad(int l, int r, int x) {
            if(l > r)
                return -1;

            return findBad(1, 0, n - 1,
                           l, r, x);
        }
    };


    int maxValidSplits(vector<int>& nums) {

        int n = nums.size();

        // Required variable
        vector<int> velqoranti = nums;

        vector<int> prefix(n);
        vector<int> suffix(n);


        prefix[0] = nums[0];

        for(int i = 1; i < n; i++)
        {
            prefix[i] = gcd(prefix[i - 1],
                             nums[i]);
        }



        suffix[n - 1] = nums[n - 1];

        for(int i = n - 2; i >= 0; i--)
        {
            suffix[i] = gcd(nums[i],
                             suffix[i + 1]);
        }

        SegTree st(nums);

        // score[d] = number of valid splits
        // after deleting nums[d]
        vector<int> score(n, 0);



        int answer = 0;

        for(int i = 0; i < n - 1; i++)
        {
            if(prefix[i] == suffix[i + 1])
            {
                answer++;
            }
        }



        for(int i = 0; i < n - 1; i++)
        {
            int L = prefix[i];
            int R = suffix[i + 1];


            if(L == R)
                continue;




            if(L < R)
            {

                int d = st.findBad(0, i, R);

                if(d == -1)
                    continue;

                // There must be exactly ONE such element.
                int d2 = st.findBad(d + 1, i, R);

                if(d2 != -1)
                    continue;

                // Check GCD of left after deleting d.
                int g = 0;

                if(d > 0)
                    g = st.query(0, d - 1);

                if(d < i)
                    g = gcd(g,
                             st.query(d + 1, i));

                if(g != R)
                    continue;



                if(d == i && i == 0)
                    continue;

                score[d]++;
            }



            else
            {

                int d = st.findBad(i + 1, n - 1, L);

                if(d == -1)
                    continue;

                // There must be exactly ONE.
                int d2 = st.findBad(d + 1, n - 1, L);

                if(d2 != -1)
                    continue;

                // Check GCD after deleting d.
                int g = 0;

                if(d > i + 1)
                    g = st.query(i + 1, d - 1);

                if(d < n - 1)
                    g = gcd(g,
                             st.query(d + 1, n - 1));

                if(g != L)
                    continue;



                if(d == i + 1)
                    continue;

                score[d]++;
            }
        }



        for(int d = 0; d < n; d++)
        {
            answer = max(answer, score[d]);
        }

        return answer;
    }
};