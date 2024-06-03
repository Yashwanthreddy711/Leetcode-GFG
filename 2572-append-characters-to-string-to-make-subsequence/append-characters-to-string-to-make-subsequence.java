class Solution {
    public int appendCharacters(String s, String t) {
        int st=0;
        int en=0;
        while(st<s.length() && en<t.length()){
           if (s.charAt(st) == t.charAt(en)) {
            st++;
            en++;
}
else{
    st++;
}
        }
        return t.length()-en;
    }
}