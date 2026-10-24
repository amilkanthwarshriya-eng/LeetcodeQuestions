class Solution {
public:
    int strStr(string haystack, string needle) {
        bool flag = true;
        for(int i=0;i<haystack.size();i++)
        {
            if(haystack[i]==needle[0])
            {
                for(int j=0;j<needle.size();j++)
                {
                    if(needle[j]!=haystack[i+j])
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag)
                {
                    return i;
                }
            }
            flag = true;
        }
        return -1;
    }
};