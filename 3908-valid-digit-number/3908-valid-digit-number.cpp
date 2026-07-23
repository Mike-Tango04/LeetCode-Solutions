class Solution {
public:
    bool validDigit(int n, int x) {

        bool occurence = false;
        bool start = false;

        // int temp = n;

        // while(temp != 0){

        //     int digit = temp % 10;

        //     if(digit == x){
        //         occurence = true;
        //     }
            
        //     temp = temp / 10;

        //     if(temp/10 <= 0){
        //         if(temp != x ){
        //             start = true;
        //         }
        //     }
        // }

        // if(occurence && start){
        //     return true;
        // }

        // return false;

        string str = to_string(n);
        char target = x + '0';

        int j = 0;

        for(int i = str.size() - 1; i >= 0; i--){

            if(str[i] == target){  
                occurence = true;
            }

            if(i == 0 && (str[i] != target)){ 
                start = true;
            }
            
        }

        if(occurence && start){
            return true;
        }

        return false;
        
    }
};