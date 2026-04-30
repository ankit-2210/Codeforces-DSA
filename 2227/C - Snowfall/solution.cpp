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
 
    vector<ll> none, twos, threes, both;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 && arr[i] % 3 == 0) {
            both.push_back(arr[i]);
        }
        else if (arr[i] % 2 == 0) {
            twos.push_back(arr[i]);
        }
        else if (arr[i] % 3 == 0) {
            threes.push_back(arr[i]);
        }
        else {
            none.push_back(arr[i]);
        }
    }
 
    vector<ll> res;
    for (auto it : twos) {
        res.push_back(it);
    }
    for (auto it : none) {
        res.push_back(it);
    }
    for (auto it : threes) {
        res.push_back(it);
    }
    for (auto it : both) {
        res.push_back(it);
    }
 
    for (auto it : res) {
        cout << it << " ";
    }
    cout << endl;
 
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
 
 