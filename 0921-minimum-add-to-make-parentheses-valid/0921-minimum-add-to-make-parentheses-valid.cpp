class Solution {
public:
    int minAddToMakeValid(string s) {

        int open = 0;
        int minAddRequired = 0;

        for (auto ch : s) {
            if (ch == '(') open++;
            else open > 0 ? open -- : minAddRequired++ ;
        }
        return open + minAddRequired;
    }
};