#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
bool solve1(ll x) {
    string s = to_string(x);
    string t = s;
    reverse(t.begin(), t.end());
    if (s == t)
        return true;
    return false;
}
 
void solve() {
    ll n;
    cin >> n;
 
    vector<ll> temp = {
        0, 1, 2, 3, 4, 5, 6, 7, 8,9, 22, 11
    };
 
    if (n < 22) {
        bool flag = false;
        ll i = 0;
        while (i <= n) {
            if (solve1(i) && (n - i) % 12 == 0) {
                cout << i << " " << (n - i) << endl;
                flag = true;
                break;
            }
            i++;
        }
 
        if (flag == false) {
            cout << -1 << endl;
        }
    }
    else {
        cout << temp[n % 12] << " " << (n - temp[n % 12]) << endl;
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
 
 