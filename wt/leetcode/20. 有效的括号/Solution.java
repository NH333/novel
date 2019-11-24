class Solution {
    public boolean isValid(String s) {
        Map<Character, Character> map = new HashMap<>();
        map.put('(', ')');
        map.put('{', '}');
        map.put('[', ']');
        Stack<Character> stack = new Stack<>();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (stack.isEmpty() || map.get(stack.peek()) == null || map.get(stack.peek()) != c) {
                stack.push(c);
            } else {
                stack.pop();
            }
        }
        return stack.isEmpty();
    }
}