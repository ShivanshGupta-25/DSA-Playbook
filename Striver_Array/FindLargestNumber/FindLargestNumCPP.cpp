#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 5, 1, 3, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << endl;
    return 0;
}