class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size()>magazine.size()) return false;
        else{
            int hash[26]={0};
            for(int i=0; i<ransomNote.size(); i++){
                hash[ransomNote[i]-'a']++;
            }
            for (int j=0; j<magazine.size(); j++){
                hash[magazine[j]-'a']--;
            }
            for (int k = 0; k < 26; k++) {
                if (hash[k] > 0) return false;
            }
        }
        return true;
    }
};