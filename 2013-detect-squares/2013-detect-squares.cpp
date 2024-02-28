class DetectSquares {
public:
    unordered_map<short, unordered_map<short, short>> umap;
    DetectSquares() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    void add(vector<int> point) {
        umap[point[0]][point[1]]++;
    }
    
    int count(vector<int> point) {
        int ans=0;
        for(auto &it: umap[point[0]])
        {
            int dist = abs(it.first - point[1]);
            if(dist==0) continue;
            int it_freq = it.second;
            ans+= it_freq*umap[point[0]-dist][point[1]]*umap[point[0]-dist][it.first];
            ans+= it_freq*umap[point[0]+dist][point[1]]*umap[point[0]+dist][it.first];
        }
        return ans;
    }
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */