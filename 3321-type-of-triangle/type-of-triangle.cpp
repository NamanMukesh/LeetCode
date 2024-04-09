class Solution {
public:
    string triangleType(vector<int>& nums) {
        for (int i=0; i<nums.size(); i++){
            int s1=nums[0];
            int s2=nums[1];
            int s3=nums[2];
            if (s1+s2<=s3 || s1+s3<=s2 || s2+s3<=s1) return ("none");
            else if(s1==s2 && s2==s3 && s1==s3) return("equilateral");
            else if(s1==s2 || s1==s3 || s2==s3) return("isosceles");
            else return("scalene");
        }
        return ("none");
    }
};