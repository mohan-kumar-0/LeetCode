class Solution {
    int max(int a, int b){
        if(a>b)
            return a;
        return b;
    }
    stack<pair<int,int>> st;
    int area;
    int idx;
    int n;
public:
    int largestRectangleArea(vector<int>& heights) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
        area = -1;
        n = heights.size();
        for(int i=0;i<n;++i){
            if(st.empty() || st.top().first <= heights[i])
                st.push({heights[i],i});
            else{
                idx = i;
                while(!st.empty() && st.top().first > heights[i]){
                    idx = st.top().second;
                    area = max(area,(i-idx)*st.top().first);
                    st.pop();
                }
                st.push({heights[i],idx});
            }
        }
        
        while(!st.empty()){
            area = max(area,(n-st.top().second)*st.top().first);
            st.pop();
        }
                
        return area;
    }
};