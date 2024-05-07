class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp1=0;
        int temp2=0;
        for (int i=0; i<nums.size(); i++){
            if (nums[i]==0){
                temp1=0;
            }
            else{
                temp1++;
                temp2=max(temp1,temp2);
            }
        }
        return temp2;
    }
};