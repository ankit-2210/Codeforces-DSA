#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
ll find(ll x, vector<ll>& parent) {
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x], parent);
}
 
void solve1(ll a, ll b, vector<ll>& parent, vector<ll>& rank) {
    ll a1 = find(a, parent);
    ll b1 = find(b, parent);
 
    if (a1 == b1)
        return;
 
    if (rank[a1] < rank[b1]) {
        parent[a1] = b1;
        rank[b1]++;
    }
    else {
        parent[b1] = a1;
        rank[a1]++;
    }
}
 
 
void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
 
    vector<ll> arr(n + 1);
    map<ll, ll> mp;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        mp[arr[i]] = i;
    }
 
    vector<ll> parent(n + 1), rank(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }
 
    ll i = 1;
    while (i + x <= n) {
        solve1(i, i + x, parent, rank);
        i++;
    }
    i = 1;
    while (i + y <= n) {
        solve1(i, i + y, parent, rank);
        i++;
    }
 
    bool flag = true;
    int val = 1;
    while (val <= n) {
        if (find(mp[val], parent) != find(val, parent)) {
            flag = false;
            break;
        }
        val++;
    }
 
    if (flag == true) {
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
 
 