class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // KADANE'S ALGORITTHM
        // Make max and current sum... Then add each element one by one
        // for each ele check if curr sum is negative, if yes then curr sum = 0
        // So we start our subarray from the next element
        
        int maxSum = INT_MIN, currSum = 0;

        for (int i=0; i < nums.size(); i++) {
            currSum += nums[i];
            maxSum = max(currSum, maxSum);

            if (currSum < 0) currSum = 0;
        }
        return maxSum;
    }
};