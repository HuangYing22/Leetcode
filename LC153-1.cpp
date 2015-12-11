//LC153
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        if(n == 2) {
            if(nums[0] < nums[1]) return nums[0];
            return nums[1];
        }
        
        int res = nums[0];
        for(int i=1; i<n-1; i++) {
            if((nums[i]<nums[i-1]) && (nums[i]<nums[i+1])) return nums[i];
        }
        if(nums[n-1]<nums[n-2]) return nums[n-1];
        return res;
    }
};
