#include<bits/stdc++.h>
using namespace std;
void print(int i, int n){
    if(i<1) return;
        cout<<i<<endl;
    print(i-1, n);
}

void printUsingSingleVariable(int n){
    if(n<=0)return;
    cout<<n<<endl;
    printUsingSingleVariable(n-1);  // decrement N by 1 instead of i-1
}
int main(){
    int n;
    cout<<"Enter N ";
    cin>>n;
    // print(n, n);
    printUsingSingleVariable(n);
}