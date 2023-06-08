class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();
        int x1 = coordinates[0][0];
        int y1 = coordinates[0][1];
        int x2 = coordinates[1][0];
        int y2 = coordinates[1][1];
        /*
            m1 = m2
            dy1/dx1 = dy2/dx2
            dy1*dx2 = dy2*dx1
        */
        for(int i=1;i<n;++i)
            if((y2-coordinates[i][1])*(x1-coordinates[i][0])!=(y1-coordinates[i][1])*(x2-coordinates[i][0]))
                return false;
        return true;
    }
};