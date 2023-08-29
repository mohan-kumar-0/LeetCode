class Solution {
public:
    int bestClosingTime(string customers) {
        int n = customers.size();
        int ind=-1,mxscore=0,score=0;
        for(int i=0;i<n;i++){
            if(customers[i]=='Y') score++;
            else score--;
            if(score>mxscore){
                mxscore=score;
                ind=i;
            }
        }
        return ind+1;
    }
};