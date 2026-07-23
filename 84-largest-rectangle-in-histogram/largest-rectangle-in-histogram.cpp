class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
     int n= heights.size();
     stack<int> stk;
        int maxArea = 0;
        
        for (int i = 0; i <= n; i++)
         {
            int currentHeight = (i == n) ? 0 : heights[i];
            while (!stk.empty() && currentHeight < heights[stk.top()]) {
                int tp = stk.top();
                stk.pop();
                
                int width = stk.empty() ? i : (i - stk.top() - 1);
                int area = heights[tp] * width;
                maxArea = max(maxArea, area);
            }
            stk.push(i);
        }
        return maxArea;
    }
};