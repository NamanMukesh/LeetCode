class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0){
            return "";
        }
        string ans="";
        sort(begin(strs), end(strs));
        string first=strs[0];
        string last=strs[n-1];
        int minLength = min(first.size(), last.size());
        for (int i=0; i<minLength;i++){
            if (first[i]==last[i]){
                ans+=first[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};