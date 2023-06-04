class Solution {
    int n;
    int ansStack[10000];
    int idx;
    string curr;
    bool neg;
    int num;
    int reduce(){
        --idx;
        switch(curr[0]){
            case '+': return ansStack[idx]+ansStack[idx+1];
            case '-': return ansStack[idx]-ansStack[idx+1];
            case '*': return ansStack[idx]*ansStack[idx+1];
        }
        return ansStack[idx]/ansStack[idx+1];;
    }

public:
    int evalRPN(vector<string>& tokens) {
        n = tokens.size();
        idx = -1;
        for(int i=0;i<n;++i){
            curr = tokens[i];
            if(curr=="+" || curr=="-" || curr=="*" || curr=="/")
                ansStack[idx] = reduce();
            else{
                ++idx;
                ansStack[idx] = stoi(curr);
            }
        }
        return ansStack[0];
    }
};