class Solution {
public:

   // Do it with KMP or Rabin-Karp Algorithm later on

    int strStr(string haystack, string needle) {

        size_t pos = haystack.find(needle);

        if(pos == string :: npos){
            return -1;
        }

        return pos;
    }
};