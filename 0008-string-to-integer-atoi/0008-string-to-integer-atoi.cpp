class Solution {
public:
    int myAtoi(string s) {
        int i;
        int sign = 1;
        bool sign_changed = false;
        bool can_set_sign = true;
        bool can_find_spaces = true;

        for (i = 0; i < s.length(); ++i) {
            if (s[i] != ' ' && (s[i] - '0' > 0 && s[i] - '0' <= 9)) {
                break;
            } else if (s[i] - '0' == 0) {
                can_set_sign = false;
            }
            
            if (s[i] == '-' && can_set_sign && !sign_changed) {
                sign = -1;
                sign_changed = true;
                can_find_spaces = false;
                continue;
            } else if (s[i] == '-' && !can_set_sign) {
                return 0;
            }

            if (s[i] == '+' && can_set_sign && !sign_changed) {
                sign = 1;
                sign_changed = true;
                can_find_spaces = false;
                continue;
            } else if (s[i] == '+' && !can_set_sign) {
                return 0;
            }

            if (s[i] != ' ' && (s[i] - '0' < 0 || s[i] - '0' > 9)) {
                return 0;
            }

            if (s[i] == ' ' && !can_find_spaces) {
                return 0;
            }

            if (s[i] == '0') {
                can_find_spaces = false;
            }
        }
        s.replace(0, i, "");

        for (i = 0; i < s.length(); ++i) {
            if (s[i] == ' ' || (s[i] - '0' < 0 || s[i] - '0' > 9)) {
                break;
            }
        }

        s.replace(i, s.length(), "");

        
        long long sum = 0;
        size_t s_length = s.length();
        
        if (s_length > 10) {
            return sign == 1 ? INT_MAX:INT_MIN;
        }

        for (i = 0; i < s.length(); ++i) {
            if (s[i] - '0' < 0 || s[i] - '0' > 9) {
                break;
            }

            sum += (s[i] - '0') * pow(10, s_length - i -1);
        }

        sum = sign * sum;
        if (sum < INT_MIN) {
            return INT_MIN;
        }

        if (sum > INT_MAX) {
            return INT_MAX;
        }

        return sum;
    }
};