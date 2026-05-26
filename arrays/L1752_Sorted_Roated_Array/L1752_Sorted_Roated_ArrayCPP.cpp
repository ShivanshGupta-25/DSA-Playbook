#include<iostream>
using namespace std;

bool checkRotatedSorted(int arr[], int n) {
    bool ascending = true;
    if(arr[0] > arr[1]){
        ascending = false;
    }
    int change = 0;
    if(ascending){
        for(int i = 1; i < n; i++){
            if(arr[i] < arr[i-1] && change == 0){
                change = 1;
            }
            else if(arr[i] > arr[i-1] && change == 1){
                return false;
            }
        }
    }
    else{
        for(int i = 1; i < n; i++){
            if(arr[i] > arr[i-1] && change == 0){
                change = 1;
            }
            else if(arr[i] < arr[i-1] && change == 1){
                return false;
            }
        }
    }
    return true;
}

int main() {
    int arr[] = {3,4,5,1,7,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    if(checkRotatedSorted(arr, n)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}