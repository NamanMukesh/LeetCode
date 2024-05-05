class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> mpp(26, 0);
        const int t1 = s.size();
        const int t2 = t.size();
        for (int i = 0; i < t2; i++) {
            mpp[t[i] - 'a']++;
        }
        for (int j = 0; j < t1; j++) {
            mpp[s[j] - 'a']--;
        }
        for (int k = 0; k < 26; k++) {
            if (mpp[k] == 1) {
                return k + 'a';
            }
        }
        return 'a';
    }
};