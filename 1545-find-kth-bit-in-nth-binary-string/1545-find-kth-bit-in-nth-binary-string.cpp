class Solution {
public:
    char findKthBit(int n, int k) {
        bool flip = false;
        return findKthBitInternal(pow(2, n)-1, k, flip);   
    }
    char findKthBitInternal(int n, int k, bool& flip) {
        if(k<=1)
            return flip? '1':'0';
        if(k == n/2+1)
            return flip? '0':'1';
        if(k > n/2+1){
            k = n/2+1-(k-n/2-1); flip = !flip;
        }
        return findKthBitInternal(n/2, k, flip);
    }
};