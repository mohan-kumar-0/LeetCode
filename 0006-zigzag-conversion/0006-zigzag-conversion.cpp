class Solution {
    string bits[1000];
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        string ans = "";
        int ctr;
        for(int i=0;i<numRows;++i)
            bits[i] = "";
        for(int i=0;s[i];){
            ctr = 0;
            while(ctr<numRows && s[i]){
                bits[ctr] = bits[ctr] + s[i];
                ++ctr;
                ++i;
            }
            ctr = numRows-2;
            while(ctr && s[i]){
                bits[ctr] = bits[ctr] + s[i];
                ++i;
                --ctr;
            }
        }
        for(int i=0;i<numRows;++i)
            ans = ans + bits[i];
        return ans;
    }
};