#include<bits/stdc++.h>
using namespace std;
void print(int n, int sum){
     if(n<=0){
        cout<<sum<<endl;
        return;
     } 
     print(n-1, sum+n);
}

void printSingleV(int n) {
    if (n <= 0) {
        return;
    }
    static int sum = 0;  // Static variable to accumulate the sum across recursive calls
    sum += n;  
    printSingleV(n - 1);  
    if (n == 1) {
        cout << sum << endl;  
    }
}
int main(){
    int n;
    cout<<"Enter n ";
    cin>>n;
    //  Print reverse Using Sigle Argument
    printSingleV(n);

    // Print reverse Using Two Arguments
    // print(n,0);
}