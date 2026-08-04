#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void solve(vector<int>& candidates,
               int target,
               int index,
               vector<int>& path,
               vector<vector<int>>& ans)
    {
        if (target == 0) {
            ans.push_back(path);
            return;
        }

        if (index >= candidates.size() || target < 0)
            return;

        // Take current element
        path.push_back(candidates[index]);
        solve(candidates, target - candidates[index], index, path, ans);
        path.pop_back();

        // Skip current element
        solve(candidates, target, index + 1, path, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> path;

        solve(candidates, target, 0, path, ans);

        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> candidates = {2,3,6,7};
    int target = 7;
    vector<vector<int>> ans = obj.combinationSum(candidates, target);
    for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}