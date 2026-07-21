class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // string ans = strs[0];
        // for (int i = 0; i < strs.size(); i++) {
        //     int N = strs[i].length();
        //     string s = "";
        //      for (int j = 0; j < N; j++) {

        //         if (ans[j] == strs[i][j]) {
        //            s+=strs[i][j];
        //         } else {
                    
        //             break;
        //         }
        //     }
        //     ans = s;

        if (strs.size() == 0)
            return strs[0];
        sort(strs.begin(), strs.end());
        string first = strs[0];
        string last= strs[strs.size()-1];
        int minsize = min(first.size(),last.size());
        string ans = "";
        for(int i =0 ;i < minsize ; i++)
        {
          if(first[i]!=last[i]) break;
          else
          ans+=first[i];
        }


        // string ans = strs[0];
        // for (int i = 0; i < strs.size(); i++) {
        //     int N = strs[i].size();
        //     string s = "";
        //      for (int j = 0; j < N; j++) {

        //         if (ans[j] == strs[i][j]) {
        //            s+=strs[i][j];
        //         } else {

        //             break;
        //         }
        //     }
        //     ans = s;
        // }
        return ans;
    }
};
         return ans; 
    }
       
    };