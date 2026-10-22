class Solution {
public:
    bool isPalindrome(string s) {
            string k;
        for( char c : s){
            if(c >='A'&& c <='Z'){
                 k+=tolower(c);
            }
            else if(c >='a' && c <='z'){
                k+=c;
            }
            else if(c >='0'&& c<='9'){
                k+=c;
            }
        }
        int l=0;
        int r=k.size()-1;
        while (l<r){
            if(k[l]!=k[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
        
    }
};