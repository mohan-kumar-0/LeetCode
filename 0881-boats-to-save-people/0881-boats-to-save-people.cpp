class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int st = 0;
        int ed = people.size()-1;
        int ans = 0;
        while(st<=ed){
            if( limit >= (people[st]+people[ed]) ){
                ++st; --ed;
            }
            else 
                --ed;
            ++ans;
        }
        return ans;
    }
};