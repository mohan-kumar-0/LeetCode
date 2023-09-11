class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> groups(500);
        vector<vector<int>> ans;
        for(int i=0;i<groupSizes.size();++i)
            groups[groupSizes[i]].push_back(i);
        vector<int> curr;
        int ctr = -1;
        for(vector<int> tp: groups){
            ++ctr;
            if(tp.size()){
                for(int i=0;i<tp.size();++i){
                    curr.push_back(tp[i]);
                    if(curr.size()==ctr){
                        ans.push_back(curr);
                        curr.clear();
                    }
                }
            }
        }
        return ans;
    }
};