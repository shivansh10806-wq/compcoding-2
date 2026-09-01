class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        
        auto dfs = [&](auto& self, int index) -> void {
            if (index == nums.size()) {
                result.push_back(current);
                return;
            }
            current.push_back(nums[index]);
            self(self, index + 1);
            current.pop_back();
            
            self(self, index + 1);
        };
        
        dfs(dfs, 0);
        return result;
    }
};
