#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
void solve() {
    ll n;
    cin >> n;
 
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    bool flag = true;
    ll prev = 0;
    ll c = 0;
    int i = 0;
    while (i < n) {
        ll curr = arr[i] + c;
        ll need = prev + 1;
 
        if (curr < need) {
            flag = false;
            break;
        }
 
        c = curr - need;
        prev = need;
        i++;
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
 
 