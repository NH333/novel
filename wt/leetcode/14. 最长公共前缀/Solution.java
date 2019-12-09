class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) {
            return "";
        }
        int i = 0;
        exitLoop:
        for (i = 0; i < strs[0].length(); i++) {
            char c = strs[0].charAt(i);
            for (int j = 1; j < strs.length; j++) {
                if (i >= strs[j].length()) {
                    break exitLoop;
                }
                if (c != strs[j].charAt(i)) {
                    break exitLoop;
                }
            }
        }
        return strs[0].substring(0, i);
    }
}