class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.length()>magazine.length()){
            return false;
        }
        string s="";
        for(int i=0;i<ransomNote.length();i++){
            
            for(int j=0;j<magazine.length();j++){
                if(ransomNote[i]==magazine[j]){
                    s+=ransomNote[i];
                    swap(magazine[j],magazine[magazine.length()-1]);
                    magazine.pop_back();
                    break;
                }
                
            }
        }
        return s==ransomNote;





    }
};