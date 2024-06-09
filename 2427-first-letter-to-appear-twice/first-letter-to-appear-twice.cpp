class Solution {
public:
    char repeatedCharacter(string s) {
        unordered_map<int, int>mpp;
        for (int i=0; i<s.length(); i++){
            mpp[s[i]]++;
            if (mpp[s[i]]==2){
                return s[i];
            }
        }
        return 0;
    }
};