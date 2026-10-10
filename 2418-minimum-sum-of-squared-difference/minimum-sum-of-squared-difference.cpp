class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();

        long long maxDiff = LLONG_MIN;

        for(int i=0;i<n;i++)
        {
            long long diff = abs(nums1[i]-nums2[i]);
            maxDiff = max(diff,maxDiff);
        }
        vector<int> countDiff(maxDiff+1,0);

        for(int i=0;i<n;i++)
        {
            int d = abs(nums1[i]-nums2[i]);
            countDiff[d]++;
        }

        int k = k1+k2;

        for(int currentDiff=maxDiff ; currentDiff>0 && k>0; currentDiff--)
        {
            int currOps = min(countDiff[currentDiff],k);

            countDiff[currentDiff] -= currOps;
            countDiff[currentDiff-1] += currOps;

            k-=currOps;
        }

        long long result = 0;

        for(long long i=0;i<=maxDiff;i++)
        {
            result+= (countDiff[i] * i*i);
        }

        return result;
    }
};