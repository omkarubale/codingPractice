class Solution {
public:
    vector<int> constructRectangle(int area) {
        for(int mid = sqrt(area); mid > 0; mid--)
            if(area%mid == 0)
                return vector<int>{area/mid, mid};
        return vector<int>{area,1};
    }
};