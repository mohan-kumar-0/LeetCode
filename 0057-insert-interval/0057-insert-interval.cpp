class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(),intervals.end());
        for(int i=1;i<intervals.size();++i)
            if(intervals[i][0]<=intervals[i-1][1]){
                //cout<<i<<" "<<intervals[i][0]<<" "<<intervals[i][1];
                if(intervals[i][1]>intervals[i-1][1])
                    intervals[i-1][1] = intervals[i][1];
                intervals.erase(intervals.begin()+i);
                --i;
            }
        return intervals;
    }
};