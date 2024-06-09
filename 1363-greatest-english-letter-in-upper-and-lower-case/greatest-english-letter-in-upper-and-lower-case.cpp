class Solution {
public:
    string greatestLetter(string s) {
        int uhash[26] = {0};
        int lhash[26] = {0};
        string ret = "";
        for (int i = 0; i < s.length(); i++) {
            if (isupper(s[i])) {
                uhash[s[i] - 'A']++;
            } else if (islower(s[i])) {
                lhash[s[i] - 'a']++;
            }
        }
        for (int j = 25; j>=0; j--) {
            if (lhash[j] && uhash[j]) {
                ret += 'A' + j;
                break;
            }
        }
        return ret;
    }
};