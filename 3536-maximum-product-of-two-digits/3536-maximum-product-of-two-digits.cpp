class Solution {
public:
    int maxProduct(int n) {                          // Solved using 2 Ways

        // string str = to_string(n);

        // sort(str.rbegin(), str.rend());

        // long long product = 0;

        // return (str[0] - '0') * (str[1] - '0');

        int largest = 0;
        int Slargest = 0;

        while (n != 0) {

            int digit = n % 10;

            if (digit >= largest) {
                Slargest = largest;
                largest = digit;
            }
            else if(digit > Slargest){
                Slargest = digit;
            }

            n = n / 10;
        }

            return largest * Slargest;
        }
    };