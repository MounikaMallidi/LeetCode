class Solution {
public:
    int minArrivalsToDiscard(vector<int>& arrivals, int w, int m) {
        int n = arrivals.size();
        int discarded = 0;
        unordered_map<int,int> freq;
        deque<pair<int,int>> window; // {day, item}

        for (int day = 0; day < n; day++) {
            int item = arrivals[day];

            // Step 1: remove items that are out of the w-day window
            while (!window.empty() && window.front().first <= day - w) {
                int oldItem = window.front().second;
                window.pop_front();
                freq[oldItem]--;
                if (freq[oldItem] == 0) freq.erase(oldItem);
            }

            // Step 2: check if we can keep this item
            if (freq[item] == m) {
                discarded++; // must discard
            } else {
                window.push_back({day, item});
                freq[item]++;
            }
        }

        return discarded;
    }
};
