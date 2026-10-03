class Solution {
public:
    int countSetBits(int n)
    {
        int count = 0;
        while(n!=0)
        {
           count += (n&1);
           n >>= 1;
        }
        
        return count;
    }

    
    vector<int> sortByBits(vector<int>& arr) {
        auto lambda = [&](int &a,int &b)
        {
            int cA = __builtin_popcount(a);
            int cB = __builtin_popcount(b);

            if(cA==cB) return a<b;

            return cA<cB;
        };

        sort(arr.begin(),arr.end(),lambda);
        return arr;
    }
};