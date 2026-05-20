/*
1
22
333
4444
55555
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter rows: ";
    cin>>n;
    for(int i = 0;i<n;i++){
        for(int j = 1;j<=i+1;j++){
            cout<<i+1;
        }
        cout<<endl;
    }
    return 0;
}