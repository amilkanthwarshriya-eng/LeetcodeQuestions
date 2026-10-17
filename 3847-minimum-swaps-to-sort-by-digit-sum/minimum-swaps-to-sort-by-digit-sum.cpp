class Solution {
public:
    int digitSum(int n)
    {
        int sum = 0;

        while(n!=0)
        {
            int rem = n%10;
            sum += rem;
            n = n/10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        vector<int> afterSorted(nums);

        auto lambda = [this](int num1,int num2)
        {
            int num1DigSum = digitSum(num1);
            int num2DigSum = digitSum(num2);

            if(num1DigSum!=num2DigSum)
                return num1DigSum < num2DigSum;
            else
                return num1 < num2;
        };

        sort(begin(afterSorted),end(afterSorted),lambda);

        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]] = i;
        }

        int swaps = 0;
        for(int i=0;i<n;i++)
        {
            int curr = nums[i];
            int exp = afterSorted[i];

            if(curr!=exp)
            {
                swap(nums[i],nums[mpp[exp]]);
                mpp[curr] = mpp[exp];
                mpp[exp] = i;
                swaps++;
            }
        }
        return swaps;
    }
};