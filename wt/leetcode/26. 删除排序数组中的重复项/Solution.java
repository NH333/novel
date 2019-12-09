class Solution {
    public int removeDuplicates(int[] nums) {
        if (nums == null) {
            return 0;
        }
        
        if (nums.length == 0 || nums.length == 1) {
            return nums.length;
        }
        
        int ret = nums.length;
        int t = nums[nums.length - 1];
        // 标记某一个数重复几次
        int k = 0;
        for (int i = nums.length - 2; i >= 0; i--) {
            if (t != nums[i]) {
                // 将数值左移
                for (int j = i + 1; j < ret - k; j++) {
                    nums[j] = nums[j + k];
                }
                
                // reset 
                ret -= k;
                t = nums[i];
                k = 0;
                continue;
            }
            
            k++;
        }
        
        // 最后再做一次 将数值左移
        for (int j = 0; j < ret - k; j++) {
            nums[j] = nums[j + k];
        }
        ret -= k;
        
        return ret;
    }
}