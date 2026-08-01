class Solution {
public:
    bool isPossible(const vector<int>& position, int mid, int m) {

        int ballCount = 1;
        int lastPlaced = position[0];

        for (int i = 0; i < position.size(); i++) {

            if (position[i] - lastPlaced >= mid) {
                ballCount++;
                lastPlaced = position[i];
            }
        }

        return ballCount >= m;
    }

    int maxDistance(vector<int>& position, int m) {

        sort(position.begin(), position.end());

        int start = 0;
        int end = position.back() - position.front();
        int minDistance = 0;

        while (start <= end) {

            int mid = start + (end - start) / 2;

            if (isPossible(position, mid, m)){ 
             minDistance = mid; 
             start = mid + 1;
            }
            else  end = mid - 1;
        }

        return minDistance;
    }
};