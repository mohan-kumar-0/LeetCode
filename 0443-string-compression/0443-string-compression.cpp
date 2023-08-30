class Solution {
public:
    int compress(vector<char>& chars) {
        int ctr = 0;
        char ch;
        int n = chars.size();
        int idx = 0;
        for(int i=0;i<n;){
            ch = chars[i];
            while((i+ctr)<n && chars[i]==chars[i+ctr])
                ++ctr;
            i += ctr;
            chars[idx] = ch;
            ++idx;
            if(ctr!=1){
                if(ctr>999){
                    chars[idx] = '0' + ctr/1000;
                    ++idx;
                }
                if(ctr>99){
                    chars[idx] = '0' + (ctr%1000)/100;
                    ++idx;
                }
                if(ctr>9){
                    chars[idx] = '0' + (ctr%100)/10;
                    ++idx;
                }
                chars[idx] = '0' + ctr%10;
                ++idx;
            }
            ctr = 0;
        }
        return idx;
    }
};