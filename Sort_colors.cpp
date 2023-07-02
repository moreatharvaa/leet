class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int med = 0;
        int high = nums.size() - 1;

        while(med<=high){
            if(nums[med] == 0){
                swap(nums[low], nums[med]);
                low++;
                med++;
            }
            else if(nums[med] == 1){
                med++;
            }
            else if(nums[med] == 2){
                swap(nums[high], nums[med]);
                high--;
            }
        }

        
    }
};
