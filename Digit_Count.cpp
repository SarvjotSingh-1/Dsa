#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cout<<" Enter n ";
    cin>>n;

    // 
    // int cnt = 0;
    // while (n>0)
    // {
    //     n=n/10;
    //     cnt++ ;
    // }
    // cout<<"Number of digits: "<<cnt;
    // return 0;

    // Methods 
    // By using log10 method, the
    // int cnt = (int)(log10(n)+1);
    // cout<<"Number of digits: "<<cnt;    


    // Revrse Number
    // int sum = 0;
    // while(n>0){
    //     int rem = n%10;
    //     sum = (sum*10)+rem;
    //      n= n/10;
    // }
    // cout<<"Reversed number: "<<sum;
    // return 0;   


    //  Armstrong Number

    int dup = n;
    int sum = 0;
    int lastDigit;
    while(n>0){
       lastDigit = n%10;
        sum = sum + (lastDigit*lastDigit*lastDigit);
        n= n/10;
    }
    cout<<"Sum of cubes of digits: "<<sum<<endl;
    if(dup==sum){
        cout<<" Given Number Is Armstrong Number";
    }else{
        cout<<" Given Number Is Not Armstrong Number";
    }
}