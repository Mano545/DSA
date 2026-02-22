class Solution {
public:
    string maximumXor(string s, string t) {
        int n = s.size();
        int one = 0, zero = 0;
        for (char ch : t) {
            if (ch == '1')
                one++;
            else
                zero++;
        }
        string opt = "";
        for (int i = 0; i < n && zero > 0 && one > 0; i++) {
            if (s[i] == '1') {
                opt += "0";
                zero--;
            } else {
                opt += "1";
                one--;
            }
        }
        if (opt.size() != n) {
            if (one > 0) {
                while (one > 0) {
                    opt += "1";
                    one--;
                }
            } else {
                while (zero > 0) {
                    opt += "0";
                    zero--;
                }
            }
        }
        string ans = "";
        for (int i = 0; i < n; i++) {
            if (s[i] != opt[i])
                ans += "1";
            else
                ans += "0";
        }

        cout << opt;
        return ans;
    }
};