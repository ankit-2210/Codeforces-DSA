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
 
    ll res = 0;
    int i = 1;
    while (i < n) {
        if (s[i] != s[i - 1]) {
            res++;
        }
        i++;
    }
 
    if (res > 1) {
        cout << 1 << endl;
    }
    else {
        if (res == 0) {
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
        }
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
 
 