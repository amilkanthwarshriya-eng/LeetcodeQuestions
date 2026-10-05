class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int res = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            res ^= nums[i];
        }
        res = res^k;

        return __builtin_popcount(res);
    }
};