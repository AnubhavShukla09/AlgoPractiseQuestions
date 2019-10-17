#include<bits/stdc++.h>

#define ll long long
#define el endl

using namespace std;
int main() {
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++) {
        cin >> ar[i];
    }
    int setbitCnt[64] = {0};
    for(int i=0; i<n; i++) {
        int temp = ar[i];
        int pos = 0;
        while( temp > 0 ) {
            if(( temp & 1 ) == 1) {
                setbitCnt[pos]++;
            } 
            ++pos;
            temp = temp >> 1;
        }
    }
    int ans = 0;
    for(int i=0; i<64; i++) {
        setbitCnt[i] = setbitCnt[i] % 3;
        if( setbitCnt[i] == 1) {
            ans += pow(2,i);
        }
    }
    cout << ans << el;
    
    return 0;
}