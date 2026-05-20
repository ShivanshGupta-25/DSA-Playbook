#include <iostream>
using namespace std;

// Pattern 9
/*
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/

int main()
{
    int n;
    cout << "enter rows:";
    cin >> n;
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = i; j < (n / 2) - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * i) + 1; k++)
        {
            cout << "*";
        }
        cout<<endl;
    }
    for (int i = (n/2)-1;i>=0;i--)
    {
        for (int j = i; j < (n / 2) - 1; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < (2 * i) + 1; k++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}