class Solution {
public:
        char findTheDifference(string s, string t) {
        vector<int> mpp(26,0);
        const int t1 = s.size();
        const int t2 = t.size();
        for(int i=0;i<t2;++i){mpp[t[i]-'a']++;}
        for(int i=0;i<t1;++i){mpp[s[i]-'a']--;}
        for(int i=0;i<26;++i){if(mpp[i]==1){return i+'a';}}
        return 'a';
    }
};