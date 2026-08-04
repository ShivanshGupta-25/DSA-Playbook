#include<iostream>
#include<vector>
using namespace std;

void powerSet(string str, string curr, int count, vector<string> &res){
    if(count >= str.length()){
        res.push_back(curr);
        return;
    }
    powerSet(str,curr,count+1,res);
    curr += str[count];
    powerSet(str,curr,count+1,res);
}

int main(){
    string a = "abc";
    vector<string> res;
    string curr = "";
    powerSet(a,curr,0,res);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<endl;
    }
    return 0;
}