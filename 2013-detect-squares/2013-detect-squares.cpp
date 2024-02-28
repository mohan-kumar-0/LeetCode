class DetectSquares {
public:
    unordered_map<int, unordered_map<int, int>> umap;
    DetectSquares() {
        
    }
    
    void add(vector<int> point) {
        umap[point[0]][point[1]]++;
    }
    
    int count(vector<int> point) {
        auto& xp = umap[point[0]];
        int ans=0;
        for(auto &it: xp)
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