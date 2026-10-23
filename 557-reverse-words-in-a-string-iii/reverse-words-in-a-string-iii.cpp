class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        string str = "";
        for(int i=s.size()-1;i>=0;i--)
        {
           
            if(isspace(s[i]))
            {
                if(ans.empty())
                {
                    ans = str+ans;
                }else{
                    ans = str+ " " +ans;
                }
                str = "";
            }else{
                str+=s[i];
            }
            
        }
        if(ans.empty())
        {
            ans = str+ans;
        }else{
            ans = str+ " " +ans;
        }
        return ans;
    }
};