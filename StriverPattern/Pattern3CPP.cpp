#include <iostream>
using namespace std;


// Pattern 3
/*
1
12
123
1234
12345
*/


int main(){
	int n;
	cout<<"Enter rows: ";
	cin>>n;
	for(int i = 0;i<n;i++){
		for(int j = 1;j<=i+1;j++){
			cout<<j;
		}
	cout<<endl;
	}
	return 0;
}