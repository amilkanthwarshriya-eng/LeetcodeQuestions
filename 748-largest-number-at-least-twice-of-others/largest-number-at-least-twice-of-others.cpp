class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max1 = INT_MIN;
        int indx = 0;
        int max2 = max1;

        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max1)
            {
                max2 = max1;
                indx = i;
                max1 = nums[i];
            }else if(nums[i]>max2 && nums[i]!=max1)
            {
                max2 = nums[i];
            }
        }

        if(max1 >= max2*2)
        {
            return indx;
        }

        return -1;
    }
};