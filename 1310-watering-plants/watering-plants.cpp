class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int step=0;
        int remaining=capacity;
        for (int i=0; i<plants.size(); i++){
            if (plants[i] <= remaining){
                step++;
                remaining-=plants[i];
            }
            else if (plants[i] > remaining){
                step+=(2*i)+1;
                remaining=capacity;
                remaining-=plants[i];
            }
        }
        return step;
    }
};