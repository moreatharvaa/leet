class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
        int n = nums.size(), lenLis = 1;
        vector<int> dp(n, 1), cnt(n, 1);
        // dp[i] = length of LIS ending at index i
        // cnt[i] = count of LIS of length dp[i] ending at index i
    
        for(int i=0; i<n; i++){
            for(int prev = 0; prev < i; prev++ ){
                if( nums[prev] < nums[i] && dp[prev] + 1 > dp[i] ){
                    dp[i] = dp[prev] + 1; 
                    cnt[i] = cnt[prev];
                }
                else if( nums[prev] < nums[i] && dp[prev] + 1 == dp[i] ) cnt[i] += cnt[prev];
            } 
            lenLis = max(lenLis, dp[i]);
        }

        int ans = 0;
        for(int i=0; i<n; i++ ) ans += (dp[i] == lenLis ? cnt[i] : 0);
        return ans;
    }
};
