class Solution {
public:
   bool evenDigs(int n)
   {
        int count = 0;
       while(n!=0)
       {
            n = n/10;
            count++;
       }
       if( count%2==0) return true;
       return false;
   }
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int num : nums)
        {
            if(evenDigs(num)) count++;
        }
        return count;
    }
};