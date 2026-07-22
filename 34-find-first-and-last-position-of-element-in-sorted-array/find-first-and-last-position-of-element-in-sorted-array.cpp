class Solution {
public:
    int first(vector<int>& nums, int target) {
        int ans = -1;
        int low = 0, high = nums.size()-1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > target)
                high = mid - 1;
            else if (nums[mid] < target)
                low = mid + 1;
            else {
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }

    int second(vector<int>& nums, int target) {
        int ans = -1;
        int low = 0, high = nums.size()-1;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > target)
                high = mid - 1;
            else if (nums[mid] < target)
                low = mid + 1;
            else {
                ans = mid;
                low = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {first(nums, target), second(nums, target)};
    }
};