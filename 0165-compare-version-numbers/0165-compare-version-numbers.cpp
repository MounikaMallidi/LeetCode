class Solution {
public:
    int compareVersion(string version1, string version2) {
        int n=version1.size();
        int m=version2.size();
        string s;
        vector<int> ver1;
        vector<int> ver2;
        int num;
        for(int i=0;i<n;i++){
            if(version1[i]!='.'){
                s+=version1[i];
            }
            else{
                s.erase(0, s.find_first_not_of('0'));
                if (s.empty()) s = "0";
                num=stoi(s);
                s="";
                ver1.push_back(num);
            }
        }
        s.erase(0, s.find_first_not_of('0'));
        if (s.empty()) s = "0";
        num=stoi(s);
        s="";
        ver1.push_back(num);
        for(int i=0;i<m;i++){
            if(version2[i]!='.'){
                s+=version2[i];
            }
            else{
                s.erase(0, s.find_first_not_of('0'));
                if (s.empty()) s = "0";
                num=stoi(s);
                s="";
                ver2.push_back(num);
            }
        }
        s.erase(0, s.find_first_not_of('0'));
        if (s.empty()) s = "0";
        num=stoi(s);
        s="";
        ver2.push_back(num);
        if(ver1.size()>ver2.size()){
            for(int i=0;i<(ver1.size()-ver2.size());i++){
                ver2.push_back(0);
            }
        }
        else if(ver1.size()<ver2.size()){
            for(int i=0;i<(ver2.size()-ver1.size());i++){
                ver1.push_back(0);
            }
        }
        for(int i=0; i<ver1.size(); i++){
            if(ver1[i] > ver2[i]) return 1;
            if(ver1[i] < ver2[i]) return -1;
        }
        return 0;
    }
};