#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
void solve() {
    ll n;
    cin >> n;
 
    vector<ll> w(n);
    for (int i = 0; i < n; i++) {
        cin >> w[i];
    }
 
    ll mn = LLONG_MAX, mx = 0;
    for (int i = 0; i < n; i++) {
        if ((i + 1) & 1) {
            mn = min(mn, w[i]);
        }
        else {
            mx = max(mx, w[i]);
        }
    }
 
    if (n % 2 == 1) {
        cout << "NO" << endl;
    }
    else {
        if (mx + 1 < mn) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
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
 
 