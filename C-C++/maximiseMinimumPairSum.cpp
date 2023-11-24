class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = nums[0] + nums[nums.size()-1];
        for(int i = 1, j = nums.size()-2; i < j; i++, j--) {
            if(ans < nums[i] + nums[j]) {
                ans = nums[i] + nums[j];
            }
        }
        return ans;
    }
};
