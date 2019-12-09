<<<<<<< HEAD
class Solution {
    public int maxArea(int[] height) {
        // 暴力解法
        int area = 0;
        for (int i = 0; i < height.length - 1; i++) {
            for (int j = i + 1; j < height.length; j++) {
                int temp = (j - i) * (height[i] < height[j] ? height[i] : height[j]);
                area = area < temp ? temp : area;
            }
        }
        return area;
    }
=======
class Solution {
    public int maxArea(int[] height) {
        // 暴力解法
        int area = 0;
        for (int i = 0; i < height.length - 1; i++) {
            for (int j = i + 1; j < height.length; j++) {
                int temp = (j - i) * (height[i] < height[j] ? height[i] : height[j]);
                area = area < temp ? temp : area;
            }
        }
        return area;
    }
>>>>>>> 639ff8d95a9fe74af54e79615c03d2fa61b773a1
}