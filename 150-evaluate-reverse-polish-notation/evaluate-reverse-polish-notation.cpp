class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;

        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="/" && tokens[i]!="*")
            {
                st.push(stoi(tokens[i]));
            }else{
                int n2 = st.top(); st.pop();
                int n1 = st.top(); st.pop();
                int res = 1;

                string s = tokens[i];
                char ch = s[0];
                switch(ch)
                {
                    case '+' : res = n1+n2;
                    break;

                    case '-' : res = n1-n2;
                    break;

                    case '*' : res = n1*n2;
                    break;

                    case '/' : res = n1/n2;
                    break;
                }
                st.push(res);
            }
        }

        return st.top();

    }
};