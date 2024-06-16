class Solution {
public:
    int minimumChairs(string s) {
        int cnt=0;
        int chair=0;
        for(int i=0; i<s.length(); i++){
            if (s[i]=='E'){
                chair++;
                cnt=max(chair,cnt); 
            }
            else{
                chair--;
            }
        }
        return cnt;
    }
};