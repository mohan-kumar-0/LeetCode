class Solution {
    int find(int i,int j,string &s,int n){
        int ans=0;
        while(i>=0 && j<n && s[i]==s[j])ans++,i--,j++;
        return ans;
    }
public:
    int countSubstrings(string s) {
        int n=s.length(),ans=0;
        for(int i=0;i<n;i++){
            ans+=find(i,i,s,n);
            if(i!=n-1)ans+=find(i,i+1,s,n);
        }
        return ans;
    }
};