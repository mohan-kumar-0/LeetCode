class Solution {
public:
    string addBinary(string a, string b) {
        if(a.length()<b.length())
            return addBinary(b,a);
        int x,y;
        int z;
        int carry = 0;
        int n = a.length();
        while(b.length()!=n)
            b = "0"+b;
        for(int i=n-1;i>=0;--i){
            x = a[i]-'0';
            y = b[i]-'0';
            z = x+y+carry;
            a[i] = '0'+(z%2);
            carry = z>1;
        }
        if(carry)
            a = "1"+a;
        return a;
            
    }
};