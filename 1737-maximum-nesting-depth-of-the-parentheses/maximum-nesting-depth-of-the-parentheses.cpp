class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int max_depth=0;
        for (int i=0; i<s.size(); i++){
            if (s[i]=='('){
                cnt++;
                if(max_depth<cnt){
                    max_depth=cnt;
                }
            }
            else if (s[i]==')'){
                cnt--;
            }
        }
        return max_depth;
    }
};