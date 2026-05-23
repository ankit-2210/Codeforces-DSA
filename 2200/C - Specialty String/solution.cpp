#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
ll mod = 1e9 + 7;
using namespace std;
 
const ll N = 1e6 + 10;
 
void solve() {
    ll n;
    cin >> n;
 
    string s;
    cin >> s;
 
    stack<char> st;
    for (int i = 0; i < n; i++) {
        if (st.empty()) {
            st.push(s[i]);
        }
        else {
            if (!st.empty() && st.top() == s[i]) {
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }
    }
 
    if (!st.empty()) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
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
 
 