#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0)

int main() {
    fastio;
    int n;
    if (!(cin >> n)) return 0;

    vector<vector<ll>> v(n);
    vector<ll> X, Y;

    for (int i = 0; i < n; i++) {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        v[i] = {x1, y1, x2, y2};
        X.push_back(x1);
        X.push_back(x2);
        Y.push_back(y1);
        Y.push_back(y2);
    }

    sort(X.begin(), X.end());
    X.erase(unique(X.begin(), X.end()), X.end());
    sort(Y.begin(), Y.end());
    Y.erase(unique(Y.begin(), Y.end()), Y.end());

    ll total_area = 0;
    for (int i = 0; i < X.size() - 1; i++) {
        ll w = X[i + 1] - X[i];
        
        vector<int> diff(Y.size(), 0);
        bool r = false;

        for (int k = 0; k < n; k++) {
            if (v[k][0] <= X[i] && X[i + 1] <= v[k][2]) {
                int yl = lower_bound(Y.begin(), Y.end(), v[k][1]) - Y.begin();
                int yr = lower_bound(Y.begin(), Y.end(), v[k][3]) - Y.begin();
                
                diff[yl]++;
                diff[yr]--;
                r = true;
            }
        }
        if (!r) continue;
        int prefix = 0;
        for (int j = 0; j < Y.size() - 1; j++) {
            prefix += diff[j];
            if (prefix > 0) {
                ll h = Y[j + 1] - Y[j];
                total_area += w * h;
            }
        }
    }

    cout << total_area << '\n';
}
