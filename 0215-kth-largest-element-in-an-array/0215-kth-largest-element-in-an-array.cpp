class Solution {
public:
    void display(vector<int>& nums, int idx){
        cout<<idx<<" : ";
        for(int x: nums)
            cout<<x<<" ";
        cout<<"\n";
    }
    int findKthLargest(vector<int>& nums, int k) {
        int start = 0;
        int end = nums.size();
        int pivotIdx = start;
        int pivot;
        int tmp;
        if(k==1){
            pivot = nums[0];
            for(int num: nums)
                if(num>pivot)
                    pivot = num;
            return pivot;
        }
        while(pivotIdx!=(k-1)){
            pivotIdx = start;
            pivot = nums[pivotIdx];
            for(int i=start;i<end;++i)
                if(nums[i]>pivot){
                    nums[pivotIdx] = nums[i];
                    ++pivotIdx;
                    nums[i] = nums[pivotIdx];
                    nums[pivotIdx] = pivot;
                }
            //display(nums,pivotIdx);
            if(pivotIdx==(k-1))
                break;
            else if(pivotIdx<k)
                start = pivotIdx+1;
            else
                end = pivotIdx;
        }
        return nums[pivotIdx];
    }
};