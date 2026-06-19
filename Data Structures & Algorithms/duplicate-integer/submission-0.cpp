class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> count(0);
        for(int i =0;i<nums.size();i++){
            count[nums[i]]++;
            if(count[nums[i]]>1)
                return true;
        }
        return false;
    }
};