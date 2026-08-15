class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        unordered_map<int, int> mp;
        for(int num: nums) mp[num]++;
        int n = nums.size();
        vector<vector<int>> count(n+1);
        for(auto [num, cnt]: mp){
            count[cnt].push_back(num);
        }
        for(int i = n; i >= 0; i--){
            if(!count[i].empty()){
                for(int num: count[i]){
                    ans.push_back(num);
                    k--;
                }
                if(k == 0) break;
            }
        }
        return ans;
    }
};
