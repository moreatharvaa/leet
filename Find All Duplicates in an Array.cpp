class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
    map<int, int> mp;
    vector<int> ans;


    int i = 0;
    while(i<nums.size())
    {
        if(mp[nums[i]] == 0)
        {
            mp[nums[i]]++;

        }
        else
        {

            ans.push_back(nums[i]);
        }
        i++;
    }  
    return ans;   

    }
};
