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
 
    ll odd = 0, even2 = 0, even4 = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 1) {
            odd++;
        }
        else if (arr[i] % 4 == 0) {
            even4++;
        }
        else {
            even2++;
        }
    }
 
    cout << max({ odd, even2, even4 }) << endl;
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
 
 