class Solution {
public:
    string removeTrailingZeros(string num) {
        int n = num.length();
        string result;
        for (int i = n - 1; i >= 0; i--) {
            if (num[i] != '0') {
                result=num.substr(0, i + 1);
                break;
            }
        }
        return result;
    }
};