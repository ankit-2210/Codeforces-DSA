#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
void solve() {
    ll n;
    cin >> n;
 
    vector<ll> b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
 
    sort(b.rbegin(), b.rend());
    if (n == 2) {
        cout << b[0] << " " << b[1] << endl;
    }
    else {
        for (int i = 0; i < n - 1; i++) {
            if (b[i] == b[i + 1]) {
                cout << -1 << endl;
                return;
            }
        }
 
        bool flag = true;
        int i = 0;
        while (i < n - 2) {
            if (b[i] % b[i + 1] != b[i + 2]) {
                flag = false;
                break;
            }
            i++;
        }
 
        if (flag == false) {
            cout << -1 << endl;
        }
        else {
            cout << b[0] << " " << b[1] << endl;
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
 
 