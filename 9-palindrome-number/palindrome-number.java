class Solution {
    public boolean isPalindrome(int x) {
        if(x<0){
            return false;
        }
        else {
            String s = String.valueOf(x);
            StringBuilder sb = new StringBuilder(s);
            if(s.equals(sb.reverse().toString())){
                return true;
            }
            return false;
        }
    }
}