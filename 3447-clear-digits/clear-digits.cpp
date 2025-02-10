class Solution {
public:
    string clearDigits(string s) {
        string res = "";

        for(char it: s) {
            if(isdigit(it)) {
                res.pop_back();
                continue;
            }
            res += it;
        }
        return res;
    }
};