class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};
        
        // Step 1: Populate frequencies
        for (char c : s) {
            freq[c - 'a']++;
        }
        
        // Step 2: Find the first unique character
        for (int i = 0; i < s.length(); i++) {
            if (freq[s[i] - 'a'] == 1) {
                return i;
            }
        }
        
        return -1;
        
    }
};