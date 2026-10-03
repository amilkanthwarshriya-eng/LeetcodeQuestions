class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size()-1;
        vector<int> ans(n+1);

        int left = 0;
        int right = n;

        while(left<=right)
        {
            if(abs(nums[right])>abs(nums[left]))
            {
                ans[n] = pow(nums[right],2);
                right--;
            }else{
                ans[n] = pow(nums[left],2);
                left++;
            }
            n--;
        }
        return ans;
    }
};