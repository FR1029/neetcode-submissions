class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> mp;
        int n = numbers.size();
        for(int i = 0; i < n; i++){
            mp[numbers[i]] = i;
        }
        for(int i = 0; i < n; i++){
            int tar = target - numbers[i];
            if(mp.count(tar)){
                if(mp[tar] > i) return {i+1, mp[tar]+1};
                else return {mp[tar]+1, i+1};
            }
        }
        return {};
    }
};
