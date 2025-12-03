class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq; // store frequency of each number
        int ans = 0;

        // count frequency of each number
        for (int x : nums) {
            freq[x]++;
        }

        // check pairs of numbers differing by 1
        for (auto it : freq) {
            int x = it.first;
            if (freq.find(x + 1) != freq.end()) { // check if x+1 exists
                ans = max(ans, freq[x] + freq[x + 1]);
            }
        }

        return ans;
    }
};
