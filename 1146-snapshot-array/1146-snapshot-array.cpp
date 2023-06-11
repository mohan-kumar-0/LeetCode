class SnapshotArray {
    vector<vector<pair<int,int>>> snapshots;
    int curr;
public:
    SnapshotArray(int length) {
        snapshots.resize(length);
        curr = 0;
    }
    
    void set(int index, int val) {
        snapshots[index].emplace_back(curr,val);
    }
    
    int snap() {
        return curr++;
    }
    
    int get(int index, int snap_id) {
        auto itr = upper_bound(snapshots[index].begin(),snapshots[index].end(),make_pair(snap_id,INT_MAX));
        if(itr==snapshots[index].begin())
            return 0;
        return (--itr)->second;
    }
};

/**
 * Your SnapshotArray object will be instantiated and called as such:
 * SnapshotArray* obj = new SnapshotArray(length);
 * obj->set(index,val);
 * int param_2 = obj->snap();
 * int param_3 = obj->get(index,snap_id);
 */