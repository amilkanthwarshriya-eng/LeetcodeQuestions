class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int> mpp{0};

        for(int i=0;i<nums.size();i++)
        {
            if(mpp.find(nums[i])!=mpp.end())
            {
                return true;
            }
            mpp[nums[i]]++;
        }
        return false;
    }
};