class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            int num = arr[i]*2;
            for(int j=0;j<n;j++)
            {
                if(i==j) continue;
                if(arr[j]==num)
                {
                    return true;
                }
            }
        }
        return false;
    }
};