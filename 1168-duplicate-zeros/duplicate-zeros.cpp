class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int countZeros = 0;
        int size = arr.size();
        for(int i=0;i<size-countZeros;i++)
        {
                if(arr[i] == 0) {
                    if (i == size - countZeros - 1) {
                        arr[size - 1] = 0; 
                        size--;            
                        break;
                    }
                    countZeros++;        
                }
        }
        int k = size-countZeros-1;
        int n = size-1;

        while(k>=0)
        {
            arr[n] = arr[k];
            n--;
            if(arr[k]==0)
            {
                arr[n] = 0;
                n--;
            }
            k--;
        }
    }
};