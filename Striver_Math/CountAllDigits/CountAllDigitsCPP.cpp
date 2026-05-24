#include <iostream>
using namespace std;

int countDigits(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Number of digits: " << countDigits(n) << endl;
    return 0;    
}