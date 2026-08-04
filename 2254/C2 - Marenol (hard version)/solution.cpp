#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
void solve() {
    ll n;
    cin >> n;
 
    string a, b;
    cin >> a;
    cin >> b;
 
    vector<ll> evenA, evenB, oddA, oddB;
    for (int i = 0; i < n; i++) {
        if (a[i] == '1') {
            if (i % 2 == 0)
                evenA.push_back(i);
            else
                oddA.push_back(i);
        }
        if (b[i] == '1') {
            if (i % 2 == 0)
                evenB.push_back(i);
            else
                oddB.push_back(i);
        }
    }
 
    if (evenA.size() != evenB.size() || oddA.size() != oddB.size()) {
        cout << -1 << endl;
    }
    else {
        ll res = 0;
        for (int i = 0; i < evenA.size(); i++) {
            res += abs(evenA[i] - evenB[i]) / 2;
        }
        for (int i = 0; i < oddA.size(); i++) {
            res += abs(oddA[i] - oddB[i]) / 2;
        }
        cout << res << endl;
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
 
 