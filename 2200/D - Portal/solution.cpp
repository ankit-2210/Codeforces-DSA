#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
 
    vector<ll> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
 
    ll mn = INT_MAX;
    int idx = -1;
    for (int i = x; i < y; i++) {
        if (p[i] < mn) {
            mn = min(mn, p[i]);
            idx = i;
        }
    }
 
    vector<ll> left, mid, right;
    for (int i = idx; i < y; i++) {
        mid.push_back(p[i]);
    }
    for (int i = x; i < idx; i++) {
        mid.push_back(p[i]);
    }
 
    int j = 0;
    while (j < x && p[j] < mid[0]) {
        j++;
    }
    for (int i = j; i < x; i++) {
        right.push_back(p[i]);
    }
    for (int i = y; i < n; i++) {
        right.push_back(p[i]);
    }
    for (int i = 0; i < j; i++) {
        left.push_back(p[i]);
    }
 
    int k = 0;
    while (k < right.size() && right[k] < mid[0]) {
        k++;
    }
    for (int i = 0; i < k; i++) {
        left.push_back(right[i]);
    }
 
    vector<ll> res;
    for (int i = 0; i < left.size(); i++) {
        res.push_back(left[i]);
    }
    for (int i = 0; i < mid.size(); i++) {
        res.push_back(mid[i]);
    }
    for (int i = k; i < right.size(); i++) {
        res.push_back(right[i]);
    }
 
    for (int i = 0; i < res.size(); i++) {
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
 
 