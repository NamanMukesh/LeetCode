class Solution {
public:
    bool isAnagram(string s, string t) {
        int hash[26]={0};
        for(int i=0; i<s.size(); i++){
            hash[s[i]-'a']++;
        }
        for(int j=0; j<t.size(); j++){
            hash[t[j]-'a']--;
        }
         for (int k : hash) {
            if (k != 0) return false;
        }
        return true;
    }
};