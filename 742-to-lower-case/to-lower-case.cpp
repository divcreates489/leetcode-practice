class Solution {
public:
    string toLowerCase(string s) {
        string k="";
        int i=0;
        while(i<s.length()){
            k+=tolower(s[i]);
           
            i++;
        }
        return k;
    }
};