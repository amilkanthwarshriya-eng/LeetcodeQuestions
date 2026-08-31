class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n=s.size();

        if(s.empty()) return false;
        else if(s[0]==')' || s[0]==']' || s[0]=='}') return false;

        for(int i=0;i<n;i++)
        {
            if(s[i]=='(' || s[i]=='[' || s[i]=='{') st.push(s[i]);
            else{
                if(st.empty() && (s[i]==')' || s[i]==']' || s[i]=='}')) return false;

                char ch = st.top();
                if((s[i]==')' && ch!='(') || (s[i]==']' && ch!='[') || (s[i]=='}' && ch!='{')) return false;
                else st.pop();
            }
        }
        if(st.empty()) return true;
        return false;
    }
};