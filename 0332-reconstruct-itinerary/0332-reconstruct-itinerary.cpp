class Solution {
    int n;
    
    void dfs(map<string,multiset<string>>& graph, string start, vector<string>& ans){
        while(graph[start].size()>0){
            string next = *(graph[start].begin());
            graph[start].erase(graph[start].begin());
            dfs(graph,next,ans);
        }
        ans.push_back(start);
    }
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        vector<string> ans;
        n = tickets.size();
        map<string,multiset<string>> mp;
        for(vector<string> ticket: tickets)
            mp[ticket[0]].insert(ticket[1]);
        dfs(mp,"JFK",ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};