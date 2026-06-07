#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
struct DSU {
    vector<int> parent, size;
    DSU(int n) {
        parent.resize(n);
        size.resize(n);
        size.assign(n, 1);
        iota(parent.begin(), parent.end(), 0);
    }
 
    int find(int x) {
        if (parent[x] == x)
            return parent[x];
        return find(parent[x]);
    }
 
    void unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b)
            return;
 
        if (size[a] < size[b])
            swap(a, b);
        parent[b] = a;
        size[a] += size[b];
    }
 
    int sz(int x) {
        return size[find(x)];
    }
};
 
void solve() {
    ll n;
    cin >> n;
 
    vector<ll> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }
 
    vector<pair<ll, int>> v;
    for (int i = 0; i < n; i++) {
        v.push_back({ h[i], i });
    }
 
    sort(v.begin(), v.end());
    DSU dsu(n);
    vector<ll> res(n, 0);
 
    ll prev = 1;
    int i = 0;
    while (i < n) {
        ll curr = v[i].first;
        ll len = curr - prev + 1;
        for (int j = 0; j < n; j++) {
            res[j] += (len * (ll)(n - dsu.sz(j)));
        }
 
        while (i < n && v[i].first == curr) {
            int e = v[i].second;
            int u = e;
            int v = (e + 1) % n;
            dsu.unite(u, v);
            i++;
        }
        prev = curr + 1;
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
 
 