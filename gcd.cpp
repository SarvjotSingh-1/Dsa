#include<bits/stdc++.h>
using namespace std;
 int main(){

    int n1, n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;

//     for( int i=1; i<min(n1,n2); i++ ){
//         if(n1%i==0 && n2%i==0){

//             cout<<" GCD is "<<i<<endl;
//             break;
//     }
//  }

//  Using euclidean distance

while(n1>0 && n2>0){
    if(n1>n2) n1=n1%n2;
    else n2=n2%n1;
}

if(n1==0)
cout<<"GCD is "<<n2<<endl;
else
cout<<"GCD is "<<n1<<endl;

 return 0;
 }
