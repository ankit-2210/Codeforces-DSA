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
 
    ll res = 0;
    ll ones = -1;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            ones = i;
            flag = true;
        }
        else {
            res += arr[i];
        }
    }
 
    if (flag == true) {
        bool f = false;
        int i = ones + 1;
        while (i < n) {
            if (arr[i] > 1) {
                f = true;
                break;
            }
            i++;
        }
        if (f == false) {
            res += 1;
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
 
 