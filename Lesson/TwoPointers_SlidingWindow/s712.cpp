#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main() {
    fastio;
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (auto &i : v) cin >> i;
    
    int l = 0, r = n - 1;
    int left_max = 0, right_max = 0;
    ll ans = 0;
    
    while (l < r) {
        if (v[l] < v[r]) {
            if (v[l] >= left_max) {
                left_max = v[l];
            } else {
                ans += left_max - v[l];
            }
            l++;
        } else {
            if (v[r] >= right_max) {
                right_max = v[r];
            } else {
                ans += right_max - v[r];
            }
            r--;
        }
    }
    
    cout << ans << '\n';
}
