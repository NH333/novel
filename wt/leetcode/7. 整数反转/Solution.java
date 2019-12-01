class Solution {
    public int reverse(int x) {
        String str = String.valueOf(x);
        boolean isNegative = false;
        if (str.startsWith("-")) {
            isNegative = true;
            str = str.substring(1);
        }
        StringBuilder builder = new StringBuilder(str);
        int result;
        try {
            result = Integer.parseInt(builder.reverse().toString());
        } catch (NumberFormatException e) {
            return 0;
        }
        if (isNegative) {
            result = -result;
        }
        return result;
    }
}