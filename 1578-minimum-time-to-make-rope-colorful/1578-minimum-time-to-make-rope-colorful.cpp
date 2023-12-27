class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans  = 0;
        int maxTime;
        int totalTime = 0;
        for(int i=0;i<neededTime.size();){
            totalTime = 0;
            maxTime = neededTime[i];
            int j = i;
            for(;j<neededTime.size() && colors[j]==colors[i];++j){
                totalTime+=neededTime[j];
                if(neededTime[j]>maxTime)
                    maxTime = neededTime[j];
            }
            ans+=totalTime-maxTime;
            //cout<<colors[i]<<" "<<ans<<" "<<totalTime<<"\n";
            i=j;
        }
        return ans;
    }
};