class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int>mpp;
        int odd=0;
        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++;
            if (mpp[s[i]]%2==1){
                odd++;
            }
            else{
                odd--;
            }
        }
        if (odd>1){
            return s.size()-odd+1;
        }
        return s.size();
    }
};