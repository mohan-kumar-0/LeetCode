class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int ans = arr[0];
        ans = arr[0];
        int winCount = 0;
        int nextPlayer=1;
        int N = arr.size();
        if(k>=N){
            for(int num: arr)
                if(ans<num)
                    ans = num;
            return ans;
        }
        int currWinner = 0;
        while(winCount<k){
            if(arr[nextPlayer]>arr[currWinner]){
                ans = arr[nextPlayer];
                winCount = 1;
                currWinner = nextPlayer;
                nextPlayer=(nextPlayer+1)%N;
            }
            else{
                winCount++;
                nextPlayer = (nextPlayer+1)%N;
                if(nextPlayer==currWinner)
                    nextPlayer = (nextPlayer+1)%N;
            }
        }
        return ans;
    }
};