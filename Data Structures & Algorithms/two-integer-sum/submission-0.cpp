class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;               // no -1
        for (int i = 0; i < (int)nums.size(); ++i) {
            int need = target - nums[i];
            auto it = hash.find(need);             // no insertion
            if (it != hash.end()) {
                return {it->second, i};            // return the pair
            }
            hash[nums[i]] = i;                     // insert after check
        }
        return {};
    }
};
