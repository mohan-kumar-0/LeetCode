class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(flowerbed.size()==1)
            return n==0 || (flowerbed[0]==0 && n<2);
        if(flowerbed[0]==0 && flowerbed[1]==0){
            --n; flowerbed[0] = 1;
        }
        for(int i=1;i<flowerbed.size()-1;++i){
            if(flowerbed[i]==0 && flowerbed[i-1]!=1 && flowerbed[i+1]!=1){
                --n; flowerbed[i] = 1;
            }
        }
        if(flowerbed[flowerbed.size()-1]==0 && flowerbed[flowerbed.size()-2]==0)
            --n;
        return n<1;
    }
};