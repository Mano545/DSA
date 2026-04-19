class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int maxArea = 0;

        // Add sentinel height
        heights.push_back(0);

        for (int i = 0; i < heights.size(); i++) {
            // Maintain increasing stack
            while (!st.empty() && heights[st.top()] > heights[i]) {
                int h = heights[st.top()];
                st.pop();

                int left = st.empty() ? -1 : st.top();
                int width = i - left - 1;

                maxArea = max(maxArea, h * width);
            }
            st.push(i);
        }

        return maxArea;
    }
};
