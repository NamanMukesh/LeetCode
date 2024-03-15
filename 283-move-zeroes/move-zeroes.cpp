class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int ctzero=0;
        for(int i=0; i<n;i++){
            if(nums[i]!=0){
                nums[ctzero++]=nums[i];  
            }
        }
        while(ctzero < n) {
            nums[ctzero++] = 0;
        }
    }
};