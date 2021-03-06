class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i + 1 < nums.size() && nums[i] == nums[i + 1]) {
                continue;
            }
            nums[len++] = nums[i];
        }
        return len;
    }
};
