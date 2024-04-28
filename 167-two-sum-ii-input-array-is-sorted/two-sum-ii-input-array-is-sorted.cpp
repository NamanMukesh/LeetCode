class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> sum;
        int size=numbers.size();
        int left=0;
        int right= size-1;
        while (left<right){
            int add=numbers[left]+numbers[right];
                if (add==target){
                    sum.push_back(left+1);
                    sum.push_back(right+1);
                    break;
                }
                else if (add<target){
                    left++;
                }
                else if (add>target){
                    right--;
                }
        }
        return sum;
    }
};