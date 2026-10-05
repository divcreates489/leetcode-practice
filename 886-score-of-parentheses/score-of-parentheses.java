class Solution {
    public int scoreOfParentheses(String s) {
        int ans = 0;
        int depth = 0;
        
        for (int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == '(') {
                depth++;
            } else {
                depth--;
                // Check if this closing parenthesis forms a core "()" unit
                if (s.charAt(i - 1) == '(') {
                    ans += 1 << depth; // 1 << depth is equivalent to 2^depth
                }
            }
        }
        
        return ans;
    }
}
