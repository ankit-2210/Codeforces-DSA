#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
void solve() {
    ll n;
    cin >> n;
 
    if (n == 1) {
        cout << 1 << endl;
    }
    else if (n == 2) {
        cout << -1 << endl;
    }
    else {
        vector<ll> res;
        res.push_back(1);
        res.push_back(2);
        res.push_back(3);
 
        ll t = 6;
        int i = 4;
        while (i <= n) {
            res.push_back(t);
            t *= 2;
            i++;
        }
 
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
 
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
 
 