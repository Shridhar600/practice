class Solution {
    public int[] moveZeroes(int[] nums) {
        
        if(nums.length == 0 || nums.length == 1){
            return nums;
        }
        
        int nonz = 0; // will look for non zero element;
        int it = 0; // will iterate the array.
        int temp;
        
        while(nonz < nums.length){
            if(nums[nonz] == 0){
                ++nonz;
            }else{
                temp = nums[it];
                nums[it] = nums[nonz];
                nums[nonz] = temp;
                ++it;
                ++nonz;
            }
        }
        return nums;
    }
}