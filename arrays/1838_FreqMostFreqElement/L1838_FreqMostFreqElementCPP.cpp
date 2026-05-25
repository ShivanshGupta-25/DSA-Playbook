#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int freqMostFreqElement(vector<int>& arr, int n, int k){

    int maxFreq = 0;

    sort(arr.begin(), arr.end());

    for(int i = 0; i < n; i++){

        int freq = 1;

        for(int j = i + 1; j < n; j++){

            if(arr[j] == arr[i]){
                freq++;
            }
            else{
                break;
            }
        }

        maxFreq = max(maxFreq, freq);
    }

    return maxFreq;
}

int main(){

    int n, k;

    cout << "Enter the size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the array: ";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the value of k: ";
    cin >> k;

    cout << "Maximum frequency is "
         << freqMostFreqElement(arr, n, k);

    return 0;
}