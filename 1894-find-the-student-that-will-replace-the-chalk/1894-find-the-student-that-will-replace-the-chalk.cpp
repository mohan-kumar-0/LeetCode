class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int sum = 0;
        int n = chalk.size();
        for(int num: chalk)
            sum+=num;
        k%=sum;
        for(int i=0;i<n;++i){
            k-=chalk[i];
            if(k<0)
                return i;
        }
        return -1;
    }
};