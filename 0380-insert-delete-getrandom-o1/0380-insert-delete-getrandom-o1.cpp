class RandomizedSet {
    unordered_map<int,bool> mp;
    bool ret;
public:
    RandomizedSet() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        mp.clear();
    }
    
    bool insert(int val) {
        if(mp.find(val)!=mp.end())
            return false;
        mp[val] = true;
        return true;
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end())
            return false;
        mp.erase(val);
        return true;
    }
    
    int getRandom() {
        int randomNumber = rand() % mp.size();
        auto itr = mp.begin();
        itr = next(itr, randomNumber);
        return itr->first;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */