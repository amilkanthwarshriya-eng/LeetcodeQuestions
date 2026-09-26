class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> st1;
        vector<int> ans;

        int i = 0;
        while(i<nums1.size())
        {
            st1.insert(nums1[i++]);
        }

        for(int i=0;i<nums2.size();i++)
        {
            if(st1.find(nums2[i])!=st1.end())
            {
                ans.push_back(nums2[i]);
                st1.erase(nums2[i]);
            }
        }
        
        return ans;
    }
};