#include<iostream>
#include<climits>
using namespace std;

int main() {
    int arr[] = {1, 2, 4, 7, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < n; i++) {

        // Smallest & Second Smallest
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] > smallest && arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }

        // Largest & Second Largest
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }

    cout << "Second Smallest : " << secondSmallest << endl;
    cout << "Second Largest : " << secondLargest << endl;

    return 0;
}