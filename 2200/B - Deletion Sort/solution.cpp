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
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] > arr[i]) {
            flag = false;
            break;
        }
    }
 
    if (flag == true) {
        cout << n << endl;
    }
    else {
        cout << 1 << endl;
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
 
 