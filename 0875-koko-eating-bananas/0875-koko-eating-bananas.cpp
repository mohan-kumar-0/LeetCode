class Solution {
public:
    int time(vector<int>& p, int n){
        long long int ans = 0;
        for(int x: p)
            ans += ceil((x*1.0)/n);
        return (int)ans;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1,r=-1;
        int ans = 0;
        int mid,n=piles.size();
        if(n==1)
            return (ceil((1.0*piles[0])/h));
        for(int i=0;i<n;++i)
            r = max(r,piles[i]);
        r*=2;
        while(l<r){
            mid = l + (r-l)/2;
            if(time(piles,mid)<=h){
                ans = mid;
                r = mid;
            }
            else
                l = mid + 1;
            //cout<<mid<<" ";
        }
        //while(time(piles,ans-1)<=h)
          //  --ans;
        return ans;
    }
};