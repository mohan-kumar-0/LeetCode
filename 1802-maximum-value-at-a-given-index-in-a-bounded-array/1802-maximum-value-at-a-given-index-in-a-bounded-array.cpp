class Solution {
    long long sumOverN(int n,int len){
        if(len==1) return n;
        if(len==0) return 0;
        long long sum = n*(long long)(n+1)/2;
        if(n>len)
            sum -= (n-len)*(long long)(n-len+1)/2;
        else if(n<len)
            sum += len-n;
        return sum;
    }
    
public:
    int maxValue(int n, int index, int maxSum) {
        int st = 1;
        int end = maxSum;
        while(st<=end){
            auto mid = st+(end-st)/2;
            auto sum = sumOverN(mid-1,index) + mid + sumOverN(mid-1,n-index-1);
            if(sum>maxSum) end = mid-1;
            else st = mid+1;
        }
        return st-1;
    }
};