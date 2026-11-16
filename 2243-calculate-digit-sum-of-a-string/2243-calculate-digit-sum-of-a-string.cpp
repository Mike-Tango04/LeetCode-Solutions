class Solution {
public:
    string digitSum(string s, int k) {
        string temp;
        int cnt = k;
        int sum = 0, i = 0;

        while(s.size() > k){
            sum += s[i] - '0';
            cnt--;
            i++;

            if(cnt == 0){
                temp += to_string(sum);
                cnt = k;
                sum = 0;
            }

            if(i == s.size()){
                if(cnt != k) temp += to_string(sum);   
                s = temp;
                cnt = k;
                sum = 0;
                i = 0;
                temp = "";
            }
        }
        return s;
    }
};