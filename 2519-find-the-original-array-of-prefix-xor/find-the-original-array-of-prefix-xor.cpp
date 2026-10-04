class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int> ans;
        int n = pref.size();
        ans.push_back(pref[0]);

        for(int i=0;i<n-1;i++)
        {
            int res = (pref[i] ^ pref[i+1]);
            ans.push_back(res);
        }
        return ans;
    }
};