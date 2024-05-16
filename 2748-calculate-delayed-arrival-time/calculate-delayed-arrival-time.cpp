class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int aviral=arrivalTime + delayedTime;
        return aviral%24;
    }
};