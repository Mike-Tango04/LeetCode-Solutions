class Solution {
public:
    int smallestNumber(int n, int t) {

        int prod = 1;
        int temp = 0;

        while (true) {

            prod = 1;
            temp = n;

            while (temp != 0) {
                prod *= temp % 10;
                temp /= 10;
            }

            if (prod % t != 0) n++;
            else return n;
        } 

        
    }
};