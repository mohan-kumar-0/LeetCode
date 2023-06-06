class Solution {
    int l,r;
    int area;
    int max(int& a, int b){
        if(a>b)
            return a;
        return b;
    }
    int min(int& a, int& b){
        if(a<b)
            return a;
        return b;
    }
public:
    int maxArea(vector<int>& height) {
        ios_base::sync_with_stdio(false);
cin.tie(NULL);
        cout.tie(NULL);
        l=0,r=height.size()-1;
        area = -1;
        while(l<r){
            area = max(area,min(height[l],height[r])*(r-l));
            if(height[l]>height[r])
                --r;
            else if(height[l]<height[r])
                ++l;
            else if(height[l+1]>height[r-1])
                ++l;
            else
                --r;
        }
        return area;
    }
};