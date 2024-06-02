class Solution {
public:
    void reverseString(vector<char>& s) {
        int j=s.size()-1;
        int mid=s.size()/2;
        for (int i=0; i<mid ;i++){
            swap(s[i],s[j-i]);
        }
    }
};