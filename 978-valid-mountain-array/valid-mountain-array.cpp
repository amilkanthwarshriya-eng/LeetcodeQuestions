class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n = arr.size();
        if(n<3) return false;
        int i=0;
        while(i<n)
        {
            i++;
            if(arr[i]==arr[i-1])
            {
                return false;
            }
            else if(arr[i]<arr[i-1])
            {
                break;
            }
        }
        if(i==n || i==1) return false;

        int j=i+1;
        while(j<n)
        {
            if(arr[j]>=arr[j-1])
            {
                return false;
            }
            j++;
        }

        return true;

    }
};