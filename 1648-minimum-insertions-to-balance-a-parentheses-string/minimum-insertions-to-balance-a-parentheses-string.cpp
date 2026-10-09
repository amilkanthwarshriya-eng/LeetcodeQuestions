class Solution {
public:
    int minInsertions(string s) {
        int count = 0;
        int n = s.size();
        int result = 0;
        int i = 0;

        while(i<n)
        {
            if(s[i]=='(')
            {
                count++;
                i++;
            }else{ // ')'
                if(count>0)
                {
                    count--;
                }else{
                    result++; // adding a '('
                }

                if(s[i+1]==')')
                {
                    i+=2;
                }else{
                    result++;
                    i++;
                }
            }
        }
        return result + count*2;
    }
};