class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for (int i = 0; i < strs.size(); i++) {
            int N = strs[i].length();
            string s = "";
             for (int j = 0; j < N; j++) {

                if (ans[j] == strs[i][j]) {
                   s+=strs[i][j];
                } else {
                    
                    break;
                }
            }
            ans = s;
        }
         return ans; 
    }
       
    };