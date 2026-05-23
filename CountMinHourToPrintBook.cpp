/*

you are given with the no of books, no of printers and no of hours each printer takes to print a single book, your task is to find the minimun no of hours required to print all the books if all printers work simultaneously

*/


#include<iostream>
#include<vector>
using namespace std;


int main(){
    int nb=10,np=4;
    // int nb,np;
    // cout<<"Enter no of books";
    // cin>>nb;
    // cout<<"Enter no of printers";
    // cin>>np
    int total = nb;
    vector<int> PTime = {2,3,4,5};
    vector<bool> P = {false, false, false,false};
    int completed = 0;
    vector<int> printed = {0,0,0,0};
    int hours = 0;
    while(completed<nb){
        for(int i = 0;i<np;i++){
            if( total > 0 && P[i]==false){
                P[i]=true;
                printed[i]++;
                total-=1;
                cout<<"Printer "<<i+1<<" started printing a book! remainging books are: "<<total<<endl;
            }
            else if(printed[i]==PTime[i]){
                completed++;
                if(total>0){
                    printed[i]=1;
                    total-=1;
                    cout<<"    Printer "<<i+1<<"completed "<<completed<<" books and started printing a new book! remaining books are: "<<total<<endl;
                }
                else{
                    P[i] = false;
                    printed[i]=INT_MIN;
                    cout<<"Printer "<<i+1<<"completed printing a book"<<endl;
                }
                
            }
            else{
                printed[i]++;
                cout<<"Printer "<<i+1<<" is still printing a book "<<endl;
            }
        }
        cout<<"Hours : "<<hours<<" || Completed books are : "<<completed<<endl;
        hours++;
    }
    cout<<"The minimum no of hours required to print all the books is "<<hours-1<<endl;
    return 0;
}