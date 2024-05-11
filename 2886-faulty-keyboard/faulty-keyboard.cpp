class Solution {
public:
    string finalString(string s) {
        string rev="";
        for(int i=0; i<s.size(); i++){
            if(s[i]=='i'){
                reverse(rev.begin(), rev.end());
            }
            else{
                rev+=s[i];
            }
        }
        return rev;
    }
};