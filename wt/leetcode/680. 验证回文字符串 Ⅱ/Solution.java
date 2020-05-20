class Solution {
    public boolean validPalindrome(String s) {
        int i = -1;
        int j = s.length();
        boolean isJump = false;
        int x = -1;
        int y = s.length();
        while (true) {
            i++;
            j--;

            //System.out.println("s.charAt(" + i + ") " + s.charAt(i) + ", s.charAt(" + j + ") " + s.charAt(j));

            if (i >= j) {
                return true;
            }

            if (s.charAt(i) == s.charAt(j)) {
                continue;
            }

            if (!isJump) {
                isJump = true;
                x = i;
                y = j;
                i++;
                if (s.charAt(i) == s.charAt(j)) {
                    continue;
                } else {
                    break;
                }
            } else {
                break;
            }
        }

        i = x - 1;
        j = y;
        while (true) {
            i++;
            j--;

            if (i >= j) {
                return true;
            }

            if (s.charAt(i) == s.charAt(j)) {
                continue;
            }

            return false;
        }
    }
}