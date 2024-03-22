class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int extra=0;
        int size=candies.size();
        vector<bool> ans;
        for(int i=0; i<size; i++){
            if (candies[i]>extra){
                extra=candies[i];
            }
        }
        for (int j=0; j<size;j++){    
            if(candies[j]+extraCandies>=extra){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};