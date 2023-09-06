class Solution {
public:
    int totalMoney(int n) {
        int money = 0;
        int j = 0;
        int mondayctr = 0;
        for(int i=0;i<n;i+=j){
            ++mondayctr;
            for(j=0;j<7 && (i+j)<n;++j){
                money+=mondayctr+j;
            }
        }
        return money;
    }
};