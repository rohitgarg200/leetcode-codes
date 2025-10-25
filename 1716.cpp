class Solution {
public:
    int totalMoney(int n) {
        int i = 0;
        int ans = 0;

        while (n >= 7) {
            ans += 28;
            ans += (7 * i);
            i++;
            n -= 7;
        }
        // ans += n;
        for (int j = 1; j <= n; j++) {
            ans += j;
            ans += i;
        }
        return ans;
    }
};