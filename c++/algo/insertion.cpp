int largestRectangleArea(vector<int> &heights) {
    int hight = heights.size();
    int maxarea = 0;
    for (int i = 0; i < hight; i++) {

        int height = heights[i];

        int rightMost = i + 1;
        while (rightMost < hight && heights[rightMost] >= height) {
            rightMost++;
        }

        int leftMost = i;
        while (leftMost >= 0 && heights[leftMost] >= height) {
            leftMost--;
        }

        rightMost--;
        leftMost++;
        maxarea = max(maxarea, height * (rightMost - leftMost + 1));
    }
    return maxarea;
}
