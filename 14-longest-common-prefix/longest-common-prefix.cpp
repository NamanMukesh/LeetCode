class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(begin(strs), end(strs));
        int n=strs.size();
        string first=strs[0];
        string last=strs[n-1];
        int minLength = min(first.size(), last.size());
        for (int i=0; i<minLength;i++){
            if (first[i]!=last[i]){
                return ans;
            }
            ans+=first[i];
        }
        return ans;
    }
};