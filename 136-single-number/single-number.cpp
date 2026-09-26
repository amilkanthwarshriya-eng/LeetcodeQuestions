class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int num : nums)
        {
            mpp[num]++;
        }
        for(int num : nums)
        {
            if(mpp[num]==1) return num;
        }
        return -1;
    }
};