class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {

        sort(asteroids.begin(), asteroids.end());

        long long planet = mass;

        for(auto val : asteroids){
            if(planet >= val) planet += val;
            else return false;
        }

        return true;
        
    }
};