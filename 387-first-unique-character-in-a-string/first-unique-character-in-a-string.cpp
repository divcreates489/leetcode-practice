class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26]={0};
        for(int i=0;i<s.length();i++){
            freq[s[i]-'a']++;
        }
        for(int j=0;j<s.length();j++){
            if(freq[s[j]-'a']==1){
                return j;
            }
        }
        return -1;
    }
};