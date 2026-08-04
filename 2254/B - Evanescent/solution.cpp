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
 
    ll t = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            t++;
        }
    }
 
    ll res = t;
    int i = 1;
    while (i <= n - 2) {
        ll curr = t;
        if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
            if (s[i - 1] == s[i + 1]) {
                curr -= 2;
            }
            else {
                curr -= 1;
            }
            res = min(res, curr);
        }
        i++;
    }
 
    cout << res << endl;
 
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
 
 