class Solution {
public:
    int smallestRepunitDivByK(int k) {
        bool remainders[100000];
        for(int i=0;i<k;++i)
            remainders[i] = false;
        int ctr = 0;
        int ans = 1;
        int starting = 1;
        while(starting<k){
            starting = starting*10 + 1;
            ++ans;
        }
        while(true){
            starting%=k;
            if(starting==0)
                return ans;
            else if(remainders[starting]==true)
                return -1;
            else
                remainders[starting] = true;
            starting = starting*10 + 1;
            
            ++ans;
        }
        return -1;
    }
};