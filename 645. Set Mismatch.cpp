// Approch 01 - Brute Force

#include<stdio.h>

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int dup = -1, missing = -1;

        for(int i=0;i<=n;i++){
            int count = 0;
            for(int j=0;j<n;j++){
                if(nums[j]==i){
                    count++;
                }
            }
            if(count==2){
                dup = i;
            } else if(count==0){
                missing = i;
            }

        }

        return{dup, missing};
        
    }
};

// Approch 02 - vector

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n + 1, 0);

        int missing = 0, dup = 0;

        for(int i=0;i<n;i++){
            v[nums[i]]++;
        }

        for(int i=1;i<v.size();i++){
            if(v[i]==2){
                dup = i;
            }
            if(v[i]==0){
                missing = i;
            }
        }
        return{dup, missing};
    }
};

//Approch 03 - map

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        int dup = 0, miss = 0;

        unordered_map<int, int> mpp;

        for(int i=1;i<=n;i++){
            mpp[i]++;
        }
        for(auto a: nums){
            mpp[a]--;
        }
        
        for(auto a:mpp){
            if(a.second==-1){
                dup = a.first;
            }
            if(a.second == 1){
                miss = a.first;
            }

        }
        return {dup, miss};
    }

};
