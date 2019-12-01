class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0) {
            return false;
        }

        if (x == 0) {
            return true;
        }
        
        List<Integer> list = new ArrayList();
        int t = x;
        while (t > 0) {
            list.add(t % 10);
            t = t / 10;
        }
        
        int size = list.size();
        for (int i = 0; i <= size / 2; i++) {
            if (list.get(i) != list.get(size - 1 - i)) {
                return false;
            }
        }
        return true;
    }
}