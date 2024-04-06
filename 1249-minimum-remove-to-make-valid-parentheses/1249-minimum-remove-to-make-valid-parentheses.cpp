class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.size();

        stack<pair<char, int>> st;

        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                st.push({'(', i});
            } else if(s[i] == ')'){
                if(!st.empty() and st.top().first == '('){
                    st.pop();
                } else {
                    st.push({')', i});
                }
            }
        }

        string ans = "";
        set<int> set;

        while(!st.empty()){
            set.insert(st.top().second);
            st.pop();
        }

        for(int i = 0; i < n; i++){
            if(set.count(i)){
                continue;
            } else {
                ans += s[i];
            }
        }

        return ans;
    }
};