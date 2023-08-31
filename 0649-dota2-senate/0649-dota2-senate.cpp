class Solution {
public:
    string predictPartyVictory(string senate) {
        queue<int> r,d;
        int n = senate.length();
        for(int i=0;senate[i];++i)
            if(senate[i]=='R')
                r.push(i);
            else
                d.push(i);
        while(!r.empty() and !d.empty()){
            if(r.front()<d.front())
                r.push(r.front()+n);
            else
                d.push(d.front()+n);
            r.pop();
            d.pop();
        }
        return r.empty()?"Dire":"Radiant";
    }
};