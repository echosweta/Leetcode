class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        string word = "";
        for(int i = s.length()-1;i>=0;i--)
        {
          if(s[i]==' ')
          {
           if(word == "") continue;
           reverse(word.begin(),word.end());
           if(ans!="") ans+=' ';
           ans+=word;    
           word = "";
          }
          else{
            word+=s[i];
          }
        }
        reverse(word.begin(),word.end());
        if(ans=="") return word ; 
        if(word!= "" ) {return ans+' ' +word;}
        return ans;
    }
};