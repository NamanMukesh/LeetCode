class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int harsh=0;
        int new_num=x;
        while(x>0){
            harsh+=x%10;
            x/=10;
        }
        if (harsh!=0 && new_num%harsh==0){
            return harsh;
        }
        return -1;
    }
};
