class Solution {
    public int removeElement(int[] nums, int val) {
        int k  = 0;
        int numsize = nums.length;


        for(int i=0;i<numsize;i++)
        {
            if(nums[i]!=val)
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
        
    }
}
