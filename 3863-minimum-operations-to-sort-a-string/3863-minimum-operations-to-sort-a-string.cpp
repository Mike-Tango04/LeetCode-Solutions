class Solution {
public:
    int minOperations(string s) {

        bool sorted = true;
        int n = s.size();

        for(int i = 1; i < n; i++){
            if(s[i] < s[i - 1]){
                sorted = false;
                break;
            }
        }

        if(sorted) return 0;
        if(n == 2) return -1;

        int mini = *min_element(s.begin(), s.end());
        int maxi = *max_element(s.begin(), s.end());

        if(s[0] == mini || s[n - 1] == maxi) return 1;

        for(int i = 1; i < n - 1; i++){
            if(s[i] == mini || s[i] == maxi) return 2;
        }

        return 3;

    }
};