/*
Approach: Two-pointer, move the shorter wall inward. Time: O(n), Space: O(1)
*/
#include <stdio.h>

int min(int a, int b) { return a < b ? a : b; }

int maxArea(int* height, int heightSize) {
    int lo = 0, hi = heightSize - 1;
    int best = 0;
    while (lo < hi) {
        int h = min(height[lo], height[hi]);
        int area = h * (hi - lo);
        if (area > best) best = area;
        if (height[lo] < height[hi]) lo++;
        else hi--;
    }
    return best;
}
