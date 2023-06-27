class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int highest = 0;
        int currAltitude=0;
        for(int alt: gain){
            currAltitude+=alt;
            if(highest<currAltitude)
                highest = currAltitude;
        }
        return highest;
    }
};