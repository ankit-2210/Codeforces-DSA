#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
ll solve1(ll low, ll high, vector<ll>& arr, ll n) {
    while (low >= 0 && high < n && arr[low] == arr[high]) {
        low--;
        high++;
    }
    low++;
    high--;
 
    if (low > high)
        return 0;
 
    vector<bool> visited((n / 2) + 1, false);
    for (int i = low; i <= high; i++) {
        if (arr[i] < n / 2) {
            visited[arr[i]] = true;
        }
    }
 
    ll m = 0;
    while (visited[m] == true) {
        m++;
    }
 
    return m;
}
 
void solve() {
    ll n;
    cin >> n;
 
    ll size = 2 * n;
    ll first = -1, last = -1;
    vector<ll> arr(2 * n);
    for (int i = 0; i < 2 * n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            if (first == -1) {
                first = i;
            }
            else {
                last = i;
            }
        }
    }
 
    ll res = 0;
    res = max(res, solve1(first, first, arr, 2 * n));
    res = max(res, solve1(last, last, arr, 2 * n));
    res = max(res, solve1((first + last) / 2, (first + last + 1) / 2, arr, 2 * n));
 
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
 
 