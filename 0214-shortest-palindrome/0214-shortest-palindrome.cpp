class Solution {
public:
    string shortestPalindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());

    string temp = s + "#" + rev;
    int n = temp.size();

    vector<int> lps(n, 0);

    for (int i = 1, len = 0; i < n; ) {
        if (temp[i] == temp[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }

    int palLen = lps[n - 1];
    string add = rev.substr(0, s.size() - palLen);

    return add + s;
}

};