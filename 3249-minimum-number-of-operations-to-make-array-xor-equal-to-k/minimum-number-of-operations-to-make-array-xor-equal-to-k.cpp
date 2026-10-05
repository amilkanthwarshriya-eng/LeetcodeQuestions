class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int res = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            res ^= nums[i];
        }
        res = res^k;

        int count  = 0;
        while(res>0)
        {
            if(res&1) count++;
            res = res>>1;
        }
        return count;
    }
};