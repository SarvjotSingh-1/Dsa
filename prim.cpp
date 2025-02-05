#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<" Enter N ";
    cin>>n;

    if(n<0){
        cout<<" Enter Positive Number ";
    }

    if( n == 2 || n == 3){
        cout<<" Given Number Is Prime ";

    }
    if(n%2 == 0){
        cout<<" Given Number Is Not Prime ";    
    }

       for (int i = 3;  i <= sqrt(n); i += 2) { 
        if (n % i == 0) {
            cout << "Given Number is Not Prime" << endl;
            return 0;
        }
    }

      // If no divisor was found, the number is prime
    cout << "Given Number is Prime" << endl;
    return 0;

}