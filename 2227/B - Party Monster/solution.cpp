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
 
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            res += 1;
        }
        else if (s[i] == ')') {
            res -= 1;
        }
    }
 
    if (res == 0) {
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
 
 