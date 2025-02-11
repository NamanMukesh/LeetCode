class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mpp;
        int size=nums.size();
        for (int i=0; i<size; i++){
            mpp[nums[i]]++;
            if (mpp[nums[i]]>size/2){
                return nums[i];
            }
        }
        return 0;        
    }
};