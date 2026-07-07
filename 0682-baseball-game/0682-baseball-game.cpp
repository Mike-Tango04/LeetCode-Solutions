class Solution {
public:
    int calPoints(vector<string>& operations) {

        stack<int> st;

        int total = 0;

        for (auto ch : operations) {

            if (ch == "+") {
                int sum = 0;
                int num = st.top();
                sum += num;
                st.pop();
                int num2 = st.top();
                sum += num2;
                st.push(num);
                st.push(sum);
                total += sum;
            }

            else if (ch == "D") {
                int x = st.top();
                x = x * 2;
                st.push(x);
                total += x;
            }

            else if (ch == "C") {
                int val = st.top();
                total -= val;
                st.pop();
            }

            else {
                int value = stoi(ch);
                st.push(value);
                total += value;
            }
        }

        return total;
    }
};