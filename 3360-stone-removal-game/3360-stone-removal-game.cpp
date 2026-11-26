class Solution {
public:
    bool canAliceWin(int n) {

        if(n < 10) return false;

        int val = 10;
        int cnt = 1;

        while(n != 0){

            if(cnt & 1){
                cnt++ ;
                if(n < val) return false;
                n -= val;
                val--;
            }
            else{
                cnt++ ;
                if(n < val) return true;
                n -= val;
                val--;
            }
        }
        return cnt % 2 == 0;
    }
};