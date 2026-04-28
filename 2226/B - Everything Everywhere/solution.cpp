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
 
    ll res = 0;
    int i = 1;
    while (i < n) {
        ll mn = min(arr[i], arr[i - 1]);
        ll diff = abs(arr[i] - arr[i - 1]);
        if (diff != 0 && mn % diff == 0) {
            res++;
        }
        i++;
    }
 
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
 
 