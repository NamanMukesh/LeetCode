class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i = left; i<=right; ++i){
            int temp=i;
            int flag=false;
            while(temp>0){
                int rem = temp%10;
                if(rem!=0 && i%rem==0){
                    flag =true;
                }
                else{
                    flag =false;
                    break;
                }
                temp/=10;
            }
            if(flag==true){
                res.push_back(i);
            }
        }
        return res;
    }
};