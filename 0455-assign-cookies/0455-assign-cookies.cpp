class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int n = s.size();
        int m = g.size();
        int i,j;
        i = j = 0;
        int satisfiedChildren = 0;
        while(i<n && j<m){
            if(s[i]<g[j])
                ++i;
            else if(s[i]>=g[j]){
                //cout<<s[i]<<" "<<g[j]<<"\n";
                ++satisfiedChildren;
                ++i; ++j;
            }
        }
        return satisfiedChildren;
    }
};