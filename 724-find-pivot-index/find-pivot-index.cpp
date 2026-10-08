class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int s1 = 0;
        int s2 = 0;
        for(int num : nums)
        {
            s2+=num;
        }
        for(int i=0;i<nums.size();i++)
        {
            s2 -= nums[i];
            if(s1==s2) return i;
            s1 += nums[i];
        }
        return -1;
    }
};