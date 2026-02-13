#include <bits/stdc++.h>
using namespace std;

const int MAXN = 200005, LOG = 19;
int up[MAXN][LOG], a[MAXN];
vector<int> pos[MAXN];

void solve() {
    int n, q;
    cin >> n >> q;
    for (int i = 0; i <= n + 1; i++) pos[i].clear();
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        if (a[i] <= n + 1) pos[a[i]].push_back(i);
    }
    for (int i = 1; i <= n; i++) {
        auto it = upper_bound(pos[a[i] + 1].begin(), pos[a[i] + 1].end(), i);
        up[i][0] = (it != pos[a[i] + 1].end()) ? *it : n + 1;
    }
    for (int j = 0; j < LOG; j++) up[n + 1][j] = n + 1;
    for (int j = 1; j < LOG; j++) {
        for (int i = 1; i <= n; i++) up[i][j] = up[up[i][j - 1]][j - 1];
    }
    while (q--) {
        int l, r, curr, count = 1;
        cin >> l >> r;
        auto it = lower_bound(pos[1].begin(), pos[1].end(), l);
        if (it == pos[1].end() || *it > r) { cout << 1 << " "; continue; }
        curr = *it;
        for (int j = LOG - 1; j >= 0; j--) {
            if (up[curr][j] <= r) {
                curr = up[curr][j];
                count += (1 << j);
            }
        }
        cout << count + 1 << " ";
    }
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) solve();
    return 0;
} 