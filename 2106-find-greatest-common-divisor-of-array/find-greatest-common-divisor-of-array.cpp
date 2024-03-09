class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m=*min_element(nums.begin(), nums.end());
        int n=*max_element(nums.begin(), nums.end());
        for(int i=n; i>1; i--)
        {
            if(n%i==0 && m%i==0)
            {
                return i;
            }
        }
        return 1;
    }
};