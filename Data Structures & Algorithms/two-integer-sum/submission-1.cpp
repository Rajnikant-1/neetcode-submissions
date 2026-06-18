class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {

            int c = target - nums[i];

            // check presence of c
            if (mp.find(c) != mp.end()) {
                return {mp[c], i};
            }

            // store current number with index
            mp[nums[i]] = i;
        }

        return {};
    }
};