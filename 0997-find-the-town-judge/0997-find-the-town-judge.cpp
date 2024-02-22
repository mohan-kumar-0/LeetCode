class Solution {
public:
    
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL); cout.tie(NULL);
    }
    
    int findJudge(int n, vector<vector<int>>& trust) {
        int trustCount[1001] = {0};
        int judge = -1;
        int size = trust.size();
        for(vector<int> pair: trust){
            ++trustCount[pair[1]];
            --trustCount[pair[0]];
        }
        // for(int i=1;i<=n;++i)
        //     cout<<trusts[i]<<"\t"; cout<<"\n";
        // for(int i=1;i<=n;++i)
        //     cout<<trustedBy[i]<<"\t";
        for(int i=1;i<=n;++i)
            if(trustCount[i]==(n-1))
                judge = i;
        return judge;
    }
};