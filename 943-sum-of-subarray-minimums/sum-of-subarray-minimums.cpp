class Solution {
public:
    const int MOD = 1e9 + 7;
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        stack<int> st;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            while(!st.empty() && arr[st.top()]>arr[i])
            {
                int val = st.top();
                st.pop();

                int pse = st.empty() ? -1 : st.top();
                int nse = i;

                sum = (sum + 1LL * (val-pse) * (nse-val) * arr[val]) % MOD;

            }
            st.push(i);

        }
        while(!st.empty())
        {
            int val = st.top();
            st.pop();

            int pse = st.empty() ? -1 : st.top();
            int nse = n;

            sum = (sum + 1LL * (val-pse) * (nse-val) * arr[val]) % MOD;
        }

        return sum % MOD;
    }
};