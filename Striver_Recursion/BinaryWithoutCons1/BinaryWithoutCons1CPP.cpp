#include<iostream>
#include<string>
#include<vector>
using namespace std;

void printBinary(string s, int n, vector<string> &result)
{
    if(n == 0)
    {
        result.push_back(s);
        return;
    }
    printBinary(s+"0", n-1, result);
    if(s.size() == 0 || s[s.size()-1] != '1'){
        printBinary(s+"1", n-1, result);
    }
}

int main()
{
    int n = 3;
    vector<string> result;
    printBinary("", n, result);
    for(int i=0; i<result.size(); i++)
    {
        cout<<result[i]<<endl;
    }
    return 0;
}