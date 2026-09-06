class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int num_2  = INT_MIN;
        stack<int> st;

        for(int i=nums.size()-1; i>=0; i--)
        {
            if(nums[i]<num_2) return true;
            while(!st.empty() && st.top()<nums[i])
            {
                num_2 = st.top();
                st.pop();
            }
            st.push(nums[i]);
        }

        return false;
    }
};