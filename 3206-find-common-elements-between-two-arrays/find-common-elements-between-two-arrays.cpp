class Solution {
public:
    vector<int> findIntersectionValues(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int cnt1=0;
        int cnt2=0;
        vector<int> ans;
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if (nums1[i]==nums2[j]){
                    cnt1++;
                    break;
                }
            } 
        }
        ans.push_back(cnt1);
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                if (nums1[j]==nums2[i]){
                    cnt2++;
                    break;
                }
            } 
        }
        ans.push_back(cnt2);
        return ans;
    }
};