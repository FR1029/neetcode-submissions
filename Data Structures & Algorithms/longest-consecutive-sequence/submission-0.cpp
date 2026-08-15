class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numset(nums.begin(), nums.end());
        int ans = 0;
        for(int num: nums){
            if(!numset.count(num-1)){
                int curr = num;
                int st = 1;
                while (numset.count(curr + 1)) {
                    curr += 1;
                    st += 1;
                }                
                ans = max(ans, st);
            }
        }
        return ans;
    }
};
