#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    // int n;
    // cin >> n;
    // int arr[n];
    // for(int i = 0; i < n; i++){
    //     cin >> arr[i];
    // }
    bool ascending = true;
    bool sorted = true;
    if(arr[0] > arr[1]){
        ascending = false;
    }

    if(ascending){
        for(int i = 1; i < n; i++){
            if(arr[i] < arr[i-1]){
                sorted = false;
                break;
            }
        }
    }
    else{
        for(int i = 1; i < n; i++){
            if(arr[i] >arr[i-1]){
                sorted = false;
                break;
            }
        }
    }
    
    if(sorted){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }    
    return 0;
}