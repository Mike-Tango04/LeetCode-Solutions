class Solution {
public:
    int maximum69Number (int num) {

        string str = to_string(num);

        int cnt = 0;

        for(int i = 0; i < str.size(); i++){

            if(str[i] != '9' && cnt < 1){
                str[i] = '9';
                cnt ++;
            }
        }

        int myNum = stoi(str);

        return myNum;        
    }
}; 