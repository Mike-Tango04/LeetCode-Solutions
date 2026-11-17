class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {

        int totalGas = accumulate(gas.begin(), gas.end(), 0);
        int totalCost = accumulate(cost.begin(), cost.end(), 0);

        if(totalGas < totalCost) return -1;

        int currGas = 0, idx = 0;

        for(int i = 0; i < gas.size(); i++){

            currGas += gas[i];
            currGas -= cost[i];

            if(currGas < 0){
                currGas = 0;
                idx = i + 1;
            }
        }
        return idx;
    }
};