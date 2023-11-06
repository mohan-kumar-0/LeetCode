class SeatManager {
public:
    set<int> seats;
    SeatManager(int n) {
        seats.clear();
        for(int i=0;i<n;++i)
            seats.insert(i+1);
    }
    
    int reserve() {
        int x = *seats.upper_bound(0);
        seats.erase(x);
        return x;
    }
    
    void unreserve(int seatNumber) {
        seats.insert(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */