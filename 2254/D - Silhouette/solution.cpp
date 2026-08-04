#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
void solve() {
    ll n;
    cin >> n;
 
    vector<ll> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
 
    map<ll, vector<ll>> mp;
    for (int i = 0; i < n; i++) {
        mp[b[i]].push_back(i);
    }
 
    if (mp.begin()->first != 0) {
        cout << -1 << endl;
        return;
    }
 
    vector<pair<ll, vector<ll>>> v;
    for (auto it : mp) {
        v.push_back({ it.first, it.second });
    }
 
    vector<ll> res(n);
    bool flag = true;
    ll p = 0;
 
    for (int i = 0; i < v.size(); i++) {
        ll x = v[i].first;
        ll cnt = v[i].second.size();
 
        ll val;
        if (i + 1 == v.size()) {
            val = p + 1;
        }
        else {
            ll x_next = v[i + 1].first;
            ll diff = x_next - x;
 
            if (diff % cnt != 0 || diff <= 0) {
                flag = false;
                break;
            }
 
            val = diff / cnt;
            if (val <= p) {
                flag = false;
                break;
            }
        }
 
        for (int idx : v[i].second) {
            res[idx] = val;
        }
 
        p = val;
    }
 
    if (flag == false) {
 
        cout << -1 << endl;
    }
    else {
        for (int i = 0; i < n; i++) {
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
 
 