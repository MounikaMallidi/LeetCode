class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for (int i = 0; i < image.size(); i++) {
            vector<int> temp = image[i];
            reverse(temp.begin(), temp.end());
            for (int j = 0; j < temp.size(); j++) {
                if (temp[j] == 0) {
                    temp[j] = 1;
                } else {
                    temp[j] = 0;
                }
            }
            image[i] = temp;
        }
        return image;
    }
};