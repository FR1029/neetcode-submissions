class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() < 3) return 0;
        int n = height.size();
        vector<int> suf(n);
        for(int i = n - 2; i >= 0; i--){
            suf[i] = max(suf[i+1], height[i+1]);
        }
        vector<int> pref(n);
        for(int i = 1; i < n; i++){
            pref[i] = max(pref[i-1], height[i-1]);
        }
        int res = 0;
        for(int i = 1; i < height.size(); i++){
            int mn = min(pref[i], suf[i]);
            if(height[i] < mn) res += (mn - height[i]);
        }
        return res;
    }
};
