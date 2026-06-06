

#include<iostream>
#include<vector>
using namespace std;

    class Solution {
        public:
        void rotate(vector<vector<int>>& matrix){
            int n=matrix.size();
            vector<vector<int>> rotatedMatrix(n,vector<int>(n));
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    rotatedMatrix[i][j]=matrix[n-1-j][i];
                }
            }
            matrix=rotatedMatrix;
        }
    };

int main(){
    // int n;
    // cin>>n;
    // vector<vector<int>> matrix(n,vector<int>(n));
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>matrix[i][j];
    //     }
    // }
    vector<vector<int>> matrix={{1,2,3},{4,5,6},{7,8,9}};
    int n=matrix.size();
    Solution obj;
    obj.rotate(matrix);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}