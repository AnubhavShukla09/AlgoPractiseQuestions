#include<iostream>
#define el endl
using namespace std;
int main() {
    int n;
    cin >> n;
    int ar[n];
    int XOR = 0;
    for(int i=0; i<n; i++) {
        cin >> ar[i];
        XOR ^= ar[i];
    }
    cout << XOR << el;
}
