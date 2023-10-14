class MyHashMap {
    int val[1000001];
public:
    MyHashMap() {
        for(int i=0;i<1000001;++i)
            val[i] = -1;
    }
    
    void put(int key, int value) {
        val[key] = value;
    }
    
    int get(int key) {
        return val[key];
    }
    
    void remove(int key) {
        val[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */