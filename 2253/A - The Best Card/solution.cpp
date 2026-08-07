#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
void solve() {
    ll n;
    cin >> n;
 
    if (n + 1 < 2) {
        cout << "NO" << endl;
    }
    else {
        for (int i = 2; i * i <= n + 1; i++) {
            if ((n + 1) % i == 0) {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
 
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
 
 