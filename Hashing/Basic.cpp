#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //precompute:
   int hash[100] = {0}; // we can only declare here array size 10 to power of 6 size of int data type else i will give segmentation error.
   for(int i =0; i<n; i++){
    hash[arr[i]] += 1; // counting the frequency of each element and storing it in hash array.
   }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }
    return 0;
}