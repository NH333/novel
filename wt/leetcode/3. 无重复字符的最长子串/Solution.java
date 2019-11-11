class Solution {
    public int lengthOfLongestSubstring(String s) {
        int max = 0;
        StringBuilder builder = new StringBuilder();
        for (char c : s.toCharArray()) {
            int index = builder.indexOf(String.valueOf(c));
            if (index != -1) {
                if (builder.length() > max) {
                    max = builder.length();
                }
                builder.delete(0, index + 1);
            }
            builder.append(c);
        }
        if (builder.length() > max) {
            max = builder.length();
        }

        return max;
    }
}