class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int temp = nums[i];
            int cnt = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == nums[i]) {
                    cnt++;
                }
            }
            if (cnt == 1) {
                return temp;
            }
        }

        return -1;
    }
};