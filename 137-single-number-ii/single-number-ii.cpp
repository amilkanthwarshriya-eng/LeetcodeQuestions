class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int num : nums)
        {
            mpp[num] += 1;
        }
        for(const auto& pair : mpp)
        {
            if(pair.second==1) return pair.first;
        }
        return -1;
    }
};