class Solution {
    int idx;
    int n;
    stack<int> st;
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        n = temperatures.size();
        vector<int> ans(n);
        for(int i=n-1;i>=0;--i)
            if(st.empty()){
                st.push(i);
            }
            else{
                while(!st.empty() && temperatures[st.top()]<=temperatures[i])
                    st.pop();
                if(!st.empty())
                    ans[i] = st.top()-i;
                st.push(i);
            }
        return ans;
    }
};