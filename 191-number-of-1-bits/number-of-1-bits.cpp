class Solution {
public:
    string binary(int n)
    {
        string res="";
        while(n>=1)
        {
            int rem = n%2;
            res +=(rem+'0');
            n = n/2;
        }
        return res;

    }
    int hammingWeight(int n) {
        string res = binary(n);
        int count = 0;
        for(int i=0;i<res.size();i++)
        {
            if(res.at(i)=='1')
            {
                count++;
            }
        }
        return count;
    }
};