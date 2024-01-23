class Solution {
public:
    void reverseString(vector<char>& s) {
        int u=0, v=s.size()-1;
        while(u<v){
            swap(s[u++], s[v--]);
        }
        
    }
};