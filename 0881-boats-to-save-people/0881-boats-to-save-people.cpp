class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        int minBoat = 0;
        int total = 0;

        sort(people.begin(), people.end());

        int i = 0;
        int j = people.size() - 1;

        while (i <= j) {

            if (people[i] + people[j] <= limit) {
                i++;
            }

            j--;
            minBoat++;
        }

        return minBoat;
    }
};