#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
void solve() {
    ll n, k;
    cin >> n >> k;
 
    string s;
    cin >> s;
 
    ll res = 0;
    for (int i = 0; i < n; i += k) {
        bool flag = true;
        int j = i;
        while (j < i + k && j < n) {
            if (s[j] == '0') {
                flag = false;
                break;
            }
            j++;
        }
        if (flag) {
            res++;
        }
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
 
 