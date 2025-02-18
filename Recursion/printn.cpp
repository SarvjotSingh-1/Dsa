#include<bits/stdc++.h>
using namespace std;
int cnt =0;
void print(int i, int n){
    if(i>n) return;
    // to print couting
    // cout<<i<<endl;
    // to print anything
    cout<<" Sarvjot Singh "<<endl;
    print(i+1, n);
}
int main(){
    int n;
    cout<<"Enter N ";
    cin>>n;

    print(1, n);
}