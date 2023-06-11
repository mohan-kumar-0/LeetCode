class Solution {
public:
    int hIndex(vector<int>& citations) {
        int i=0;
        sort(citations.begin(),citations.end(),greater<int>());
        for(i=0;i<citations.size();++i){
            if(citations[i]<=i){
                return i;
            }
        }
        return i;
    }
};