// class Solution {
// public:
//     int countBeautifulPairs(vector<int>& nums) {
//         int cnt = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             for (int j = i + 1; j < nums.size(); j++) {
//                 if (nums[i] != nums[j] && __gcd(nums[i], nums[j]) == 1) {
//                     cnt++;
//                 }
//             }
//         }
//         return cnt;
//     }
// };

class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        int cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            int first, num = nums[i];
            while (num > 0) {
                first = num % 10;
                num /= 10;
            }
            for (int j = i + 1; j < nums.size(); j++) {
                if (__gcd(first, nums[j]%10) == 1) {
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
