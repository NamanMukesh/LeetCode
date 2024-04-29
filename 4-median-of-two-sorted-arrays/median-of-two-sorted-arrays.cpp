class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        int l=0;
        int r=0;
        while(l<nums1.size() && r<nums2.size()){
            if (nums1[l]>nums2[r]){
                arr.push_back(nums2[r]);
                r++;
            }
            else {
                arr.push_back(nums1[l]);
                l++;
            }
        }
        while(l<nums1.size()){
            arr.push_back(nums1[l]);
            l++;
        }
        while(r<nums2.size()){
            arr.push_back(nums2[r]);
            r++;
            }

        int size=arr.size();
        if (size%2==0){
            int mid=size/2;
            return ((arr[mid-1]+arr[mid])/2.0);
        }
        else{
            return arr[size/2];
        }
        return 0;
    }
};

// class Solution {
// public:
//     double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//         int i = 0;
//         int j = 0;
//         int l1 = nums1.size();
//         int l2 = nums2.size();
//         vector<int> merged;
//         while (i < l1 || j < l2) {
//             if (i < l1 && (j >= l2 || nums1[i] < nums2[j])) {
//                 merged.push_back(nums1[i]);
//                 i++;
//             } else {
//                 merged.push_back(nums2[j]);
//                 j++;
//             }
//         }
//         int l3 = merged.size();
//         if (l3 % 2 != 0) {
//             return merged[l3 / 2];
//         } else {
//             return (merged[l3 / 2 - 1] + merged[l3 / 2]) / 2.0;
//                   
//         }
//             
//     }
// };