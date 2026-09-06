class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<char> st;
        if(num.size()==k) return "0";

        for(int i=0;i<num.size();i++)
        {
            while(!st.empty() && st.back() > num[i] && k!=0)
            {
                st.pop_back();
                k--;
            }
            st.push_back(num[i]);
        }

        while(k!=0 && !st.empty())
        {
            st.pop_back();
            k--;
        }

        string ans="";
        for(char ch : st)
        {
            if(ans=="" && ch=='0') continue;
            ans+=ch;
        }

        return ans.empty() ? "0" : ans;
    }
};