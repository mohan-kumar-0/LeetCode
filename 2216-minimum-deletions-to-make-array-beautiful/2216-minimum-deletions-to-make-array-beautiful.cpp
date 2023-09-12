class Solution {
public:
    int minDeletion(vector<int>& nums) {
        stack<int> st;
        for(int i=0;i<nums.size();i+=2){
            st.push(nums[i]);
            while((i+1)<nums.size() && nums[i+1]==st.top())
                ++i;
            if((i+1)<nums.size()){
                st.push(nums[i+1]);
            }
        }
        if(st.size()%2==1)
            st.pop();
        return nums.size()-st.size();
    }
};