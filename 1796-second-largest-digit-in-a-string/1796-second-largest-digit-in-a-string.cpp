class Solution {
public:
    int secondHighest(string s) {
        int ctr[10] = {0};
        for(int i=0;s[i];++i)
            if(s[i]>='0' && s[i]<='9')
                ctr[s[i]-'0'] = 1;
        int ans = 0;
        bool flag = false;
        for(int i=9;i>=0;--i)
            if(!flag && ctr[i])
                flag = true;
            else if(flag && ctr[i])
                return i;
        return -1;
    }
};