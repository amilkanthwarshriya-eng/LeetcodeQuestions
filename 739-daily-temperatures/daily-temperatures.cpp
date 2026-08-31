class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size()-1;
      vector<int> ans(n+1);
      stack<int> st;
      st.push(n);

      for(int i=n;i>=0;i--)
      {
            while(!st.empty() && temperatures[st.top()]<=temperatures[i])
            {
                st.pop();
            }
            if(st.empty()) ans[i] = 0;
            else
             ans[i] = st.top()-i;

            st.push(i);
      }  

      return ans;
    }
};