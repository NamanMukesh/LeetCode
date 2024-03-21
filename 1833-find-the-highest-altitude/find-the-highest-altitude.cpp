class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> peaks;
        peaks.push_back(0);
        int sum=0;
        for(int i=0; i<gain.size(); i++){
            sum+=gain[i];
            peaks.push_back(sum);
        }
        return (*max_element(peaks.begin(),peaks.end()));
    }
};