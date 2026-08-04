#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
void solve() {
    ll a, b, c;
    cin >> a >> b >> c;
 
    ll mn1 = abs(a - b);
    ll mn2 = abs(b - c);
    ll mn3 = abs(a - c);
 
    ll ans = min({ mn1, mn2, mn3 });
    cout << ans << endl;
 
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
 
 