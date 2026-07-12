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
 
    ll idx = 0;
    ll m = 0;
    while (idx < n && arr[idx] == -1) {
        m++;
        idx++;
    }
 
    ll t = 0;
    ll adj = 0;
    ll prev = -1;
    while (idx < n) {
        ll num = arr[idx];
        ll c = 0;
        while (idx < n && arr[idx] == num) {
            c++;
            idx++;
        }
        if (num == prev + 1 && t > 0) {
            adj++;
        }
        prev = num;
        t++;
    }
 
    ll p = (t + (m > 0 ? 1 : 0));
    ll p1 = (m > 0 ? 1 + adj : 1);
 
    vector<ll> power(n + 1);
    power[0] = 1;
    for (int i = 1; i <= n; i++) {
        power[i] = (power[i - 1] * 2) % mod;
    }
 
    cout << p1 % mod * power[n - p] % mod << endl;
 
 
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
 
 