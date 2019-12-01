class Solution {
    public String countAndSay(int n) {
        String lastStr = "1";
        if (n == 1) {
            return lastStr;
        }
        
        // 循环 n - 1 次
        for (int i = 0; i < n - 1; i++) {
            StringBuilder builder = new StringBuilder();
            char t = '0';
            int num = 0;
            for (int j = 0; j < lastStr.length(); j++) {
                if (t == '0') {
                    t = lastStr.charAt(j);
                    num = 1;
                    continue;
                }
                
                if (t == lastStr.charAt(j)) {
                    num++;
                } else {
                    builder.append(num).append(t);
                    t = lastStr.charAt(j);
                    num = 1;
                }
            }
            builder.append(num).append(t);
            lastStr = builder.toString();
        }
        
        return lastStr;
    }
}