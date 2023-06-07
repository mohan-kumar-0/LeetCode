class Solution {
    int ans;
    int d,e,f;
public:
    int minFlips(int a, int b, int c) {
        ans = 0;
        while((a|b) != c){
            d = a&1;
            e = b&1;
            f = c&1;
            if(d==e && (f==0 && d==1))
                ans+=2;
            else if(d==e && (f==1 && d==0))
                ans+=1;
            else if(d!=e && f==0)
                ans+=1;
            a>>=1; b>>=1; c>>=1;
        }
        return ans;
    }
};