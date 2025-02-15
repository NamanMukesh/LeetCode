class Solution {
public:
//  T.C.- O(n) S.C.- O(n)

    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> arrange(n,0);
        int pos=0, neg=1;
        for(int i=0; i<n; i++){
            if(nums[i]<0){
                arrange[neg]=nums[i];
                neg+=2;
            }
            else{
                arrange[pos]=nums[i];
                pos+=2;
            }
        }
        return arrange;   
}

    //T.C.- O(2n) S.C.- O(n)
    
    // vector<int> rearrangeArray(vector<int>& nums) {
    //     vector<int>pos;
    //     vector<int>neg;
    //     for(int i=0; i<nums.size();i++){
    //         if(nums[i]>=0){
    //             pos.push_back(nums[i]);
    //         }
    //         else{
    //             neg.push_back(nums[i]);
    //         }
    //     }
    //     for(int i=0; i<(nums.size()/2); i++){
    //         nums[2*i]=pos[i];
    //         nums[2*i+1]=neg[i];
    //     }
    //     return nums;
    // }
};