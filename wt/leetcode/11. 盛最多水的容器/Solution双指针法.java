<<<<<<< HEAD
class Solution {
    public int maxArea(int[] height) {
        // 双指针解法
        int l = 0;
        int r = height.length - 1;
        int area = 0;
        while (l < r) {
            int t = (r - l) * (height[l] < height[r] ? height[l] : height[r]);
            if (t > area) {
                area = t;
            }
            
            // 移动指针
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        
        return area;
    }
=======
class Solution {
    public int maxArea(int[] height) {
        // 双指针解法
        int l = 0;
        int r = height.length - 1;
        int area = 0;
        while (l < r) {
            int t = (r - l) * (height[l] < height[r] ? height[l] : height[r]);
            if (t > area) {
                area = t;
            }
            
            // 移动指针
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        
        return area;
    }
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}