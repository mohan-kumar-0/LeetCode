class Solution {
    int n;
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> time;
        stack<double> st;
        n = speed.size();
        for(int i=0;i<n;++i)
            time.push_back({position[i],(double)(target-position[i])/speed[i]});
        sort(time.begin(),time.end());
        st.push(time[n-1].second);
        for(int i=n-2; i>=0; --i){
            if(st.top()<time[i].second)
                st.push(time[i].second);
        }
        return st.size();
    }
};