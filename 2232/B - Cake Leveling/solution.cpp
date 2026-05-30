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
 
    vector<ll> res(n);
    ll mn = LLONG_MAX;
    ll pref = 0;
    for (int i = 0; i < n; i++) {
        pref += arr[i];
        mn = min(mn, pref / (i + 1));
        res[i] = mn;
    }
 
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    cout << endl;
 
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
 
 