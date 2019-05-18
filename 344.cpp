class Solution {
public:
    void reverseString(vector<char>& s) {
        int s_len = s.size();
        if(s_len<2) return;
        for(int i=0; i<s_len/2; i++)
        {
            char tmp = s[i];
            s[i]=s[s_len-i-1];
            s[s_len-i-1]=tmp;
        }
    }
};