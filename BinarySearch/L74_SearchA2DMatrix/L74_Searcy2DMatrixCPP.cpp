#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int top = 0;
    int bot = matrix.size() - 1;

    while (top <= bot) {
        int mid = (top + bot) / 2;

        if (matrix[mid][0] < target && matrix[mid][matrix[mid].size() - 1] > target) {
            break;
        }
        else if (matrix[mid][0] > target) {
            bot = mid - 1;
        }
        else {
            top = mid + 1;
        }
    }

    int row = (top + bot) / 2;

    int left = 0;
    int right = matrix[row].size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (matrix[row][mid] == target) {
            return true;
        }
        else if (matrix[row][mid] > target) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    return false;
}

int main() {
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 3;
    cout << searchMatrix(matrix, target);
    return 0;
}