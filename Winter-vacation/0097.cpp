class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int n1 = s1.length();
        int n2 = s2.length();
        int n3 = s3.length();
        if (n1 + n2 != n3) {
            return false;
        }
        bool dp[n1 + 1][n2 + 1];
        for (int i = 0; i <= n1; i++) {
            for (int j = 0; j <= n2; j++) {
                if (i == 0 && j == 0) {
                    dp[i][j] = true;
                    continue;
                }
                dp[i][j] = false;
                if (i - 1 >= 0 && s3[i + j - 1] == s1[i - 1] && dp[i - 1][j]) {
                    dp[i][j] = true;
                }
                if (j - 1 >= 0 && s3[i + j - 1] == s2[j - 1] && dp[i][j - 1]) {
                    dp[i][j] = true;
                }
            }
        }
        return dp[n1][n2];
    }
};
