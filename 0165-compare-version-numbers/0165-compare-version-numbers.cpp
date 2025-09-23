class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int> ver1, ver2;
        string s;
        int num;

        // Process version1
        for (char c : version1) {
            if (c != '.') {
                s += c;
            } else {
                if (s.empty()) s = "0";          // handle empty part
                num = 0;
                for (char ch : s) num = num*10 + (ch - '0');  // convert safely
                ver1.push_back(num);
                s = "";
            }
        }
        if (s.empty()) s = "0";
        num = 0;
        for (char ch : s) num = num*10 + (ch - '0');
        ver1.push_back(num);
        s = "";

        // Process version2
        for (char c : version2) {
            if (c != '.') {
                s += c;
            } else {
                if (s.empty()) s = "0";
                num = 0;
                for (char ch : s) num = num*10 + (ch - '0');
                ver2.push_back(num);
                s = "";
            }
        }
        if (s.empty()) s = "0";
        num = 0;
        for (char ch : s) num = num*10 + (ch - '0');
        ver2.push_back(num);

        // Pad shorter vector with zeros
        while (ver1.size() < ver2.size()) ver1.push_back(0);
        while (ver2.size() < ver1.size()) ver2.push_back(0);

        // Compare each revision
        for (int i = 0; i < ver1.size(); i++) {
            if (ver1[i] > ver2[i]) return 1;
            if (ver1[i] < ver2[i]) return -1;
        }

        return 0;
    }
};
