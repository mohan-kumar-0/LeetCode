class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(goal.length()!=s.length())
            return false;
        string diffA = "";
        string diffB = "";
        int ctr[26] = {0};
        for(int i=0;s[i];++i){
            ++ctr[s[i]-'a'];
            if(s[i]!=goal[i]){
                diffA=diffA+s[i];
                diffB=diffB+goal[i];
            }
        }
        bool appearTwice = false;
        for(int i=0;i<26;++i)
            appearTwice = appearTwice || ctr[i]>1;
        if( (diffA.length()==2 && ((diffA[0]==diffB[0] && diffA[1]==diffB[1]) || (diffA[1]==diffB[0] && diffA[0]==diffB[1])) ) || (diffA=="" && appearTwice) )
            return true;
        return false;
    }
};