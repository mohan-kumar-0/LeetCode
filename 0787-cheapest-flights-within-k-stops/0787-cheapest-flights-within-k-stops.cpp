class Solution {
public:
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);  cout.tie(NULL);
    }
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>adj(n);
        for(int i = 0;i < flights.size();i++){
            int src1 = flights[i][0];
            int des1 = flights[i][1];
            int cost = flights[i][2];
            adj[src1].push_back(make_pair(des1,cost));
        }
        vector<int>arr(n,INT_MAX);
        queue<pair<int,pair<int,int>>>q;
        q.push({0,{src,0}});
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            int step = it.first;
            int n1 = it.second.first;
            int cost = it.second.second;
            if(step > k)continue;
            for(auto it2 : adj[n1]){
                int adjNode = it2.first;
                int c1 = it2.second;
                if(c1 + cost < arr[adjNode] && step <= k){
                    arr[adjNode] = cost + c1;
                    q.push({step + 1,{adjNode,cost + c1}});
                }
            }
        }

        if(arr[dst] == INT_MAX)return -1;
        return arr[dst];
        

    }
};