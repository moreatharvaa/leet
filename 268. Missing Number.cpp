class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
     int n = nums.size();

     int sum = n*(n+1)/2;

     int s2 = 0;
     for(int i=0;i<n;i++){
         s2+=nums[i];
     }
  return (sum-s2);
    }      
    //     hash[n+1] = {0}; 
    //     for(int i=0;i<n;i++){
    //         hash[nums[i]]++;
    //     }
    //     for(int i=0;i<n;i++){
    //         if(nums[i]==0){
    //             return i
    //         }
    //     }

    // }
    // return -1;
    
};
