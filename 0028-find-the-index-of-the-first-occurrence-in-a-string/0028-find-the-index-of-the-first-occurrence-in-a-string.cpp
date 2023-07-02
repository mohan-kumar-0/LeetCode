class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        if(n==m)
            return (needle==haystack)-1;
        int j;
        for(int i=0;i<n;++i){
            j = 0;
            while(haystack[i+j] && needle[j] && haystack[i+j] == needle[j])
                ++j;
            if(j==m)
                return i;
        }
        return -1;
    }
};