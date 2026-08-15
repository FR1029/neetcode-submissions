class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        for(char c: s){
            if(mp.count(c)) mp[c]++;
            else mp[c] = 1;
        }
        for(char c: t){
            mp[c]--;
            if(mp[c] == -1) return false;
        }
        for (auto [c, count] : mp) {
            if (count != 0) return false;
        }
        return true;
    }
};
