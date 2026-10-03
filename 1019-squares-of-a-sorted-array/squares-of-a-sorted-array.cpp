class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        auto lambda = [&](int &a,int &b)
        {
            return a<b;
        };
        for(int i=0;i<nums.size();i++)
        {
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end(),lambda);
        return nums;
    }
};