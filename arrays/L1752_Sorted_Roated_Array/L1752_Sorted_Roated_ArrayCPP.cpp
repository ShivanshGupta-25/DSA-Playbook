#include<iostream>
using namespace std;

bool checkRotatedSorted(int nums[], int n) {
    int count = 0;

    for(int i = 0; i < n; i++) {
        if(nums[i] > nums[(i + 1) % n]) {
            count++;
        }
    }

    return count <= 1;
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