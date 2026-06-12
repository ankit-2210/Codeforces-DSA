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
 
    bool flag = true;
    for (int i = 0; i < k; i++) {
        int ones = 0;
 
        int r = i;
        while (r < n) {
            if (s[r] == '1')
                ones++;
            r += k;
        }
 
        if (ones % 2) {
            flag = false;
            break;
        }
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
 
 