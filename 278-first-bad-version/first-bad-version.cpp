// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        for (int i=0; i<=n; i++){
            if (isBadVersion(i)==true) return i;
        }
    return 0;
    }
};