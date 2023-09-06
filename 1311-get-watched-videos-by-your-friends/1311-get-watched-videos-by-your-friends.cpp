class Solution {
public:
    vector<string> watchedVideosByFriends(vector<vector<string>>& watchedVideos, vector<vector<int>>& friends, int id, int level) {
        bool visited[200];
        vector<string> ans;
        unordered_map<string,int> mp;
        for(int i=0;i<friends.size();++i)
            visited[i] = false;
        vector<int> levelFriends;
        queue<pair<int,int>> q;
        q.push({id,0});
        visited[id] = true;
        pair<int,int> curr;
        while(!q.empty()){
            curr = q.front();
            q.pop();
            if(curr.second<level){
                for(int currFriend: friends[curr.first])
                    if(!visited[currFriend]){
                        visited[currFriend] = true;
                        q.push({currFriend,curr.second+1});
                    }
            }
            else if(curr.second==level)
                levelFriends.push_back(curr.first);
        }
        for(int fr: levelFriends)
            for(string s: watchedVideos[fr])
                if(mp.find(s) == mp.end())
                    mp[s] = 1;
                else
                    mp[s] = mp[s]+1;
        vector<pair<int,string>> intermediateRes;
        for(auto e: mp)
            intermediateRes.push_back({e.second,e.first});
        sort(intermediateRes.begin(),intermediateRes.end());
        for(auto e: intermediateRes)
            ans.push_back(e.second);
        return ans;
    }
};