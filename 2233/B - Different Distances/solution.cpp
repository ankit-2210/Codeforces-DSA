#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
void solve() {
    ll n;
    cin >> n;
 
    vector<ll> res;
    for (int i = 1; i <= n; i++) {
        res.push_back(i);
    }
    for (int i = 2; i <= n; i++) {
        res.push_back(i);
    }
    res.push_back(1);
    for (int i = 1; i <= n; i++) {
        res.push_back(i);
    }
    for (int i = 1; i <= n; i++) {
        res.push_back(i);
    }
 
    for (int i = 0; i < 4 * n; i++) {
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
 
 