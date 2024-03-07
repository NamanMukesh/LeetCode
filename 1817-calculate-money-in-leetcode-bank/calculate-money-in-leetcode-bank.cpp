class Solution {
public:
    int totalMoney(int n) {
        int save = 0;
        int current =1;
        for (int i = 1; i <= n; i++) {
            save+=current;
            if (i%7==0) {
                current=i/7+1;
            } 
            else {
                current+=1;
            }
        }
        return save;
    }
};