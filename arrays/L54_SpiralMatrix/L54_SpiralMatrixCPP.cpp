#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;

        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {

            // Left -> Right
            for (int j = left; j <= right; j++) {
                res.push_back(matrix[top][j]);
            }
            top++;

            // Top -> Bottom
            for (int i = top; i <= bottom; i++) {
                res.push_back(matrix[i][right]);
            }
            right--;

            // Right -> Left
            if (top <= bottom) {
                for (int j = right; j >= left; j--) {
                    res.push_back(matrix[bottom][j]);
                }
                bottom--;
            }

            // Bottom -> Top
            if (left <= right) {
                for (int i = bottom; i >= top; i--) {
                    res.push_back(matrix[i][left]);
                }
                left++;
            }
        }

        return res;
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    Solution obj;
    vector<int> res = obj.spiralOrder(matrix);

    for (int x : res) {
        cout << x << " ";
    }

    return 0;
}