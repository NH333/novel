class Solution {
    public int romanToInt(String s) {
        Map<String, Integer> map = new HashMap<>();
        map.put("I", 1);
        map.put("V", 5);
        map.put("X", 10);
        map.put("L", 50);
        map.put("C", 100);
        map.put("D", 500);
        map.put("M", 1000);
        map.put("IV", 4);
        map.put("IX", 9);
        map.put("XL", 40);
        map.put("XC", 90);
        map.put("CD", 400);
        map.put("CM", 900);
        
        int i = 0;
        int sum = 0;
        while (i <= s.length() - 1) {
            // 优先看两个字符的是否能匹配上
            if (i <= s.length() - 2) {
                String subStr = s.substring(i, i + 2);
                if (map.containsKey(subStr)) {
                    sum += map.get(subStr);
                    i += 2;
                    continue;
                }
            }
            
            // 两个字符没有匹配上，则匹配单个字符
            sum += map.get(s.substring(i, i + 1));
            i++;
        }
        
        return sum;
    }
}