/*

1      1
12    21
123  321
12344321

*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter rows: ";
    cin>>n;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=i;j++){
            cout<<j+1;
        }
        for(int k = 0;k<n-i-1;k++){
            cout<<"  ";
        }
        for(int l=i+1;l>0;l--){ 
            cout<<l;
        }
        cout<<endl;
    }
    return 0;
}