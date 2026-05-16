#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
void solve() {
    ll n;
    cin >> n;
 
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    ll c0 = 0, c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            c0++;
        }
        else if (arr[i] == 1) {
            c1++;
        }
        else if (arr[i] == 2) {
            c2++;
        }
    }
 
    ll p = min(c1, c2);
    ll r = abs(c1 - c2);
    ll res = c0 + p + (r / 3);
    cout << res << endl;
 
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
 
 