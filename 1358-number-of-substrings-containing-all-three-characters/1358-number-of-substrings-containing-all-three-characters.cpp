class Solution {
public:
    int numberOfSubstrings(string s) {

        int cntA = 0, cntB = 0, cntC = 0;
        int total = 0, left = 0;

        for (int right = 0; right < s.size(); right++) {

            if (s[right] == 'a') cntA++;
            else if (s[right] == 'b') cntB++;
            else cntC++;

            while (cntA > 0 && cntB > 0 && cntC > 0) {

                total += s.size() - right;

                if (s[left] == 'a') cntA--;
                else if (s[left] == 'b') cntB--;
                else cntC--;

                left++;
            }
        }

        return total;
    }
};