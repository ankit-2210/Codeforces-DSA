#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
ll solve1(ll a, ll b) {
    return (a + b - 1) / b;
}
 
void solve() {
    ll n, x, y, z;
    cin >> n >> x >> y >> z;
 
    ll noAI = solve1(n, x + y);
 
    ll withAI;
    ll mx = solve1(n, x);
    if (mx <= z) {
        withAI = mx;
    }
    else {
        ll rem = n - (x * z);
        withAI = z + solve1(rem, x + (10 * y));
    }
 
    cout << min(noAI, withAI) << endl;
 
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
 
 