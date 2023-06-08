class TimeMap {
    unordered_map<string, map<int, string>> timemap;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        timemap[key][timestamp] = value;
    }
    
    string get(string key, int timestamp) {
        if (!timemap.count(key))
            return "";
        auto itr = timemap[key].upper_bound(timestamp);
        if (itr != timemap[key].begin())
            return (--itr)->second;
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */