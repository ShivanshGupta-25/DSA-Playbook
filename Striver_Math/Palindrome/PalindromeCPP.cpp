#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return (rev == n);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPalindrome(n))
        cout << "Palindrome Number" << endl;
    else
        cout << "Not Palindrome" << endl;
    return 0;
}