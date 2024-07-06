class Solution {
public:
    int passThePillow(int n, int time) {
        int val=time/(n-1);
        bool dir=(val%2==0)?true:false;

        if(dir)
            return 1+time%(n-1);
        else
            return n-time%(n-1);

    }
};