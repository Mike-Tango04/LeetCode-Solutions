class Solution {
public:
    int countOdds(int l, int h) {

        // Solved in 2 ways , brute force and tricker observation -

        // int cnt = 0;

        // for(int i = low; i <= high; i++){
        //     if(i % 2 != 0){
        //         cnt ++ ;
        //     }
        // }

        // return cnt;

        // ********** Observation ********

        return ((h+1)/2) - (l/2);
        
    }
};