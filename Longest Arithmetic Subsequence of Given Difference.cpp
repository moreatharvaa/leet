class Solution {
public:
    int longestSubsequence(vector<int>& arr, int d) {
        unordered_map<int, int> mp;
        int mx = 0;
        for(int i: arr){
            mp[i] = mp[i-d] + 1;
            mx = max(mp[i], mx);

        }
        return mx;


        
    }
};
