class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        vector<int> diff(heights.size()+1, 0);
        diff.back() = bricks;

        for(int i = 1; i<heights.size(); i++)
        {
            diff[i] = heights[i]-heights[i-1];
            if(diff[i]<0) diff[i] = 0;
        }
        priority_queue<int> pq;
        int sum = 0;

        for(int i = 0; i<heights.size(); i++)
        {
            sum += diff[i];
            pq.push(diff[i]);
            while(sum > bricks)
            {
                if(ladders == 0) return i-1;

                sum -= pq.top();
                pq.pop();
                ladders--;
                if(ladders == 0 && sum + diff[i+1] > bricks) return i;
            }
        }

        return heights.size()-1;
    }
};