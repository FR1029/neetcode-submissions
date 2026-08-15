class Solution {
public:
    bool isPalindrome(string s) {
        string t = "";
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 'a' && s[i] <= 'z') ||
                (s[i] >= 'A' && s[i] <= 'Z') ||
                (s[i] >= '0' && s[i] <= '9')) {
                t += tolower(s[i]);
            }
        }
        int n = t.size();
        for(int i = 0; i < n/2; i++){
            if(t[i] != t[n-i-1]) return false;
        }
        return true;
    }
};
