class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max_freq=count(nums.begin(),nums.end(),nums[0]);
        int cnt=1;
        for(int i=1; i<nums.size();i++)
        {   
            int t=(count(nums.begin(),nums.end(),nums[i]));
            if(nums[i]!=nums[i-1] && t==max_freq) 
            {
                cnt++;
            }
            else if (nums[i]!=nums[i-1] && t>max_freq){
                max_freq=t;
                cnt=1;
            }
        }
        return cnt*max_freq;
    }
};
