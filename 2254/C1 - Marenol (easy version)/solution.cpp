#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
void solve() {
    ll n;
    cin >> n;
 
    string a, b;
    cin >> a;
    cin >> b;
 
    ll evenA = 0, evenB = 0, oddA = 0, oddB = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == '1') {
            if (i % 2 == 0)
                evenA++;
            else
                oddA++;
        }
        if (b[i] == '1') {
            if (i % 2 == 0)
                evenB++;
            else
                oddB++;
        }
    }
 
    if (evenA == evenB && oddA == oddB) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
 
    }
 
}
 
int main()
{
    ll t;
    cin >> t;
 
    while (t--) {
        solve();
    }
 
    return 0;
}
 
 