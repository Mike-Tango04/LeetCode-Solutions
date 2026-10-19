class Solution {
public:
    int minDeletions(string s) {

        // 2 Solutions are implemented below , One with O(nlogn) and this one is without sorting S ------->

        vector<int> freq(26, 0);

        for(auto ch : s) freq[ch - 'a']++ ;

        int del = 0;

        unordered_set<int> st;

        for(auto val : freq){

            while(val > 0 && st.count(val)){  // If freq > 0 and set also have already seen this freq
                val-- ;
                del++ ;
            }

            if(val > 0) st.insert(val);      // New Freq hai , Add krdo
        }

        return del;

       
        /*    // Second approach , Did it on own, A bit messy but ------------->

        // sort(s.begin(), s.end());

        // unordered_set<int> st;

        // int cnt = 1;
        // int del = 0;

        // for (int i = 1; i < s.size(); i++) {

        //     if (s[i] != s[i - 1]) {

        //         if (st.find(cnt) != st.end()) {

        //             while (st.find(cnt) != st.end() && cnt != 0) {
        //                 cnt--;
        //                 del++;
        //             }
        //             st.insert(cnt);
        //             cnt = 1;
        //         } else {
        //             st.insert(cnt);
        //             cnt = 1;
        //         }
        //     } else
        //         cnt++;
        // }

        // if (st.find(cnt) != st.end()) {

        //     while (st.find(cnt) != st.end() && cnt != 0) {
        //         cnt--;
        //         del++;
        //     }
        //     st.insert(cnt);
        //     cnt = 1;
        // }
        //  else
        //     st.insert(cnt);

        // return del;

        */
    }
};