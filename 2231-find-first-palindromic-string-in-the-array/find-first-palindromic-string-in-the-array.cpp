// class Solution {
// public:
//     string firstPalindrome(vector<string>& words) {
//       for (int i=0; i<words.size(); i++){
//         string first=words[i];
//         reverse(first.begin(), first.end());
//         if (first==words[i]){
//             return first;
//         }  
//       }
//       return "";
//     }
// };

class Solution {
public:
    string firstPalindrome(vector<string>& words) {
      for (int i=0; i<words.size(); i++){
        string first=words[i];
        string rev="";
        for (int j=first.size()-1; j>=0; j--){
            rev+=first[j];
            if (first==rev){
                return first;
            }
        }  
      }
      return "";
    }
};