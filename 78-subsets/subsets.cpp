class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> soln ={{}};
        for(int i:nums){
            int size=soln.size();
            for(int j=0; j<size; j++){
                vector<int> subset=soln[j];
                subset.push_back(i);
                soln.push_back(subset);
            }
        }
        return soln;
    }
};