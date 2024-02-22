class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        int trustedBy[1001] = {0};
        int trusts[1001] = {0};
        int judge = -1;
        for(vector<int> pair: trust){
            ++trustedBy[pair[1]];
            ++trusts[pair[0]];
        }
        // for(int i=1;i<=n;++i)
        //     cout<<trusts[i]<<"\t"; cout<<"\n";
        // for(int i=1;i<=n;++i)
        //     cout<<trustedBy[i]<<"\t";
        for(int i=1;i<=n;++i)
            if(trustedBy[i]==(n-1) && trusts[i]==0)
                judge = i;
        return judge;
    }
};