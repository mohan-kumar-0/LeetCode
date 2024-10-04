class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length()-1;
        int size = s.length();
        while(left<size && 0==iswalnum(s[left]))
            ++left;
        
        while(right>=left && !iswalnum(s[right]))
            --right;
        
        while(left<right) {
            
            if(tolower(s[left])!=tolower(s[right]))
                return false;
            
            left++;
            right--;
            
            while(left<size && 0==iswalnum(s[left]))
                ++left;

            while(right>=left && !iswalnum(s[right]))
                --right;
        }
        
        /*
        #@$$@% w$#%$# fdst45 34 25erw @#$%@$%
        
        */
        
        return true;
    }
};