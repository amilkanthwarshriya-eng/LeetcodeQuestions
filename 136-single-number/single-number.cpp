class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        for(i=0;i<nums.size()-1;i+=2)
        {
            if(nums[i]!=nums[i+1])
            {
                return nums[i];
            }
        }
        if(i==nums.size()-1) return nums[i];
        return -1;
    }
};