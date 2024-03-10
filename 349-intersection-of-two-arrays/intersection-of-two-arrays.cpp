class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersection;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                if(nums1[i]==nums2[j])
                {
                    intersection.push_back(nums1[i]);
                    break;
                } 
            }
        }
         unordered_set<int> set1(intersection.begin(),intersection.end());
         return vector<int>(set1.begin(),set1.end());
        
    }
};