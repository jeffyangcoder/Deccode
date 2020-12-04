class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> dp(rowIndex + 1, 1);
        for (int i = 1; i <= rowIndex; i++) 
        {
            for (int j = i - 1; j >= 1; j--) 
            {
                dp[j] = dp[j - 1] + dp[j];
            }
        }
        return dp;
    }
};
