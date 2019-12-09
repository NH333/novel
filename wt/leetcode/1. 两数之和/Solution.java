<<<<<<< HEAD
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int num = nums[i];
            if (map.get(target - num) != null) {
                return new int[] {map.get(target - num), i};
            }
            map.put(num, i);
        }
        return new int[]{};
    }
=======
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int num = nums[i];
            if (map.get(target - num) != null) {
                return new int[] {map.get(target - num), i};
            }
            map.put(num, i);
        }
        return new int[]{};
    }
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}