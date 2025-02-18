#include<bits/stdc++.h>
using namespace std;
long long int printSum(int n){
    if(n==0) return 0;
   return n*n*n+printSum(n-1);
}

int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;
   cout<<printSum(n);
}

