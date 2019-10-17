#include<bits/stdc++.h>

#define ll long long
#define el endl

using namespace std;

int indexOfSetbit(int element) {
    int pos = 0;
    while(element > 0) {
        if(( element & 1) == 1) {
            break;
        }
        pos++;
        element = element >> 1;
    }
    return pos;
}

int main() {
    int n;
    cin >> n;
    int ar[n];
    int grpA = 0, grpB = 0, XOR = 0;
    for(int i=0; i<n; i++) {
        cin >> ar[i];
        XOR ^= ar[i];
    }

    int posSetbit = indexOfSetbit(XOR);
    int posBit;
    for(int i=0; i<n; i++) {
        if( indexOfSetbit(ar[i]) == posSetbit ) {
            grpA ^= ar[i];
        } else {
            grpB ^= ar[i];
        }
    }
    cout << grpB << " " << grpA << el;

    return 0;
}