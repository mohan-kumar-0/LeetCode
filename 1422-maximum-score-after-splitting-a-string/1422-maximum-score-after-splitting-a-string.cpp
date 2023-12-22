class Solution {
public:
    int maxScore(string s) {
        int left=0,right=0;
        int n=s.length();
        for(char c: s)
            right+=c-'0';
        int ans = -1;
        for(int i=0;i<(n-1);++i){
            char c = s[i];
            left+=c=='0';
            right-=c=='1';
            if((left+right)>ans)
                ans = left+right;
        }
        return ans;
    }
};