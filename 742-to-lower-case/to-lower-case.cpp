class Solution {
public:
    string toLowerCase(string s) {
        string k="";
        int i=0;
        while(i<s.length()){
            if(isupper(s[i])){
                k+=tolower(s[i]);
            }
            else{
                k+=s[i];
            }
            i++;
        }
        return k;
    }
};