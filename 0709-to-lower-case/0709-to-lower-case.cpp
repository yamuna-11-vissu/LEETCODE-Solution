class Solution {
public:
    string toLowerCase(string s) {
        string k=s;
        for( char &c : k){
            c=tolower(c);
        }
        return k;
        
        
    }
};