class Solution {
    vector<string> ans[9];
public:

    void populate(int n, int openingUsed=0, int closingUsed=0, int totalUsed=0, string currPerm=""){
        if(totalUsed==(2*n))
            ans[n].push_back(currPerm);
        else if(openingUsed==n)
            populate(n,openingUsed,closingUsed+1,totalUsed+1,currPerm+')');
        else{
            populate(n,openingUsed+1,closingUsed,totalUsed+1,currPerm+'(');
            if(openingUsed>closingUsed)
                populate(n,openingUsed,closingUsed+1,totalUsed+1,currPerm+')');
        }
    }

    vector<string> generateParenthesis(int n) {
        std::ios::sync_with_stdio(false);
        if(ans[n].size()!=0)
            return ans[n];
        populate(n);
        return ans[n];
    }
};