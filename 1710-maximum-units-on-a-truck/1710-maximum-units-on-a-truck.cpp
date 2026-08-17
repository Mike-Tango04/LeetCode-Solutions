class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        sort(boxTypes.begin(), boxTypes.end(),[](auto& a, auto& b){
             return a[1] > b[1];
         });

        int totalUnits = 0;

        for (int i = 0; i < boxTypes.size(); i++) {

            if (boxTypes[i][0] <= truckSize) {
                totalUnits += (boxTypes[i][0] * boxTypes[i][1]);
                truckSize -= boxTypes[i][0];
            }
            else{
                totalUnits += truckSize * boxTypes[i][1];
                break;
            }
        }

        return totalUnits;
    }
};