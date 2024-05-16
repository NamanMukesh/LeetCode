class Solution {
public:
    string firstPalindrome(vector<string>& words) {
      for (int i=0; i<words.size(); i++){
        string first=words[i];
        reverse(first.begin(), first.end());
        if (first==words[i]){
            return first;
        }  
      }
      return "";
    }
};