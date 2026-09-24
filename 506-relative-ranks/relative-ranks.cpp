class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<int> indices(n);
        iota(indices.begin(), indices.end(), 0);
        
        sort(indices.begin(), indices.end(), [&](int a, int b) {
            return score[a] > score[b];
        });   
          
        vector<string> result(n);
    
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                result[indices[i]] = "Gold Medal";
            } else if (i == 1) {
                result[indices[i]] = "Silver Medal";
            } else if (i == 2) {
                result[indices[i]] = "Bronze Medal";
            } else {
                result[indices[i]] = to_string(i + 1);
            }
        }
        return result;
    }
};