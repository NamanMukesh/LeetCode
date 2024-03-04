class Solution {
public:
    int findLUSlength(string a, string b) {
        int len_a=a.length();
        int len_b=b.length();
        if (a==b)
        {
            return -1;
        }
        else
        {
            return max(len_a,len_b);
        }

    }
};