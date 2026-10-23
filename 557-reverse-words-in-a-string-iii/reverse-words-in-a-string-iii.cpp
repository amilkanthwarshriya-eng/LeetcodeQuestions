class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string str = "";
        for(int i=0;i<s.size();i++)
        {
            
            if(isspace(s[i]))
            {
                reverse(str.begin(), str.end());
                ans += ans.empty() ? str :  " " + str;
                str = "";
            }else{
                str+=s[i];
            }
        }
        reverse(str.begin(), str.end());
        ans += ans.empty() ? str : " " + str;
        return ans;

    }
};