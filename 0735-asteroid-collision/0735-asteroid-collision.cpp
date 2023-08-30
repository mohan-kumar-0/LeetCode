class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int> ans;
        for(int asteroid: asteroids){
            if(asteroid<0 && !st.empty() && st.top()>0){
                while(!st.empty() && st.top()>0 && st.top()<-asteroid)
                    st.pop();
                if(st.empty())
                    st.push(asteroid);
                else if(-asteroid==st.top())
                    st.pop();
                else if(st.top()<0)
                    st.push(asteroid);
            }
            else
                st.push(asteroid);
        }
        stack<int> tp;
        while(!st.empty()){
            tp.push(st.top());
            st.pop();
        }
        while(!tp.empty()){
            ans.push_back(tp.top());
            tp.pop();
        }
        return ans;
    }
};