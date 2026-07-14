#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
void solve() {
    ll n;
    cin >> n;
 
    string s;
    cin >> s;
 
    ll mx = 0;
    ll curr = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '#') {
            curr++;
        }
        else {
            mx = max(mx, curr);
            curr = 0;
        }
    }
 
    mx = max(mx, curr);
    cout << (mx + 1) / 2 << endl;
 
 
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
 
 