class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> result(n);
        int left = 0;
        int right = n - 1;
        int ptr = n - 1;

        while (left <= right) {
            if (std::abs(nums[left]) > std::abs(nums[right])) {
                result[ptr] = nums[left] * nums[left];
                left++;
            } else {
                result[ptr] = nums[right] * nums[right];
                right--;
            }
            ptr--;
        }
        return result;
    }
};
