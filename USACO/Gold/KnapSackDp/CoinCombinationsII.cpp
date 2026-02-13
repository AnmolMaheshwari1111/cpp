#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, c;
    if (!(cin >> n >> c)) return 0;

    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];

    // x[i] will store the number of ways to reach sum 'i'
    // We need size c + 1 to include the index 'c'
    vector<long long> x(c + 1, 0);
    
    // Base case: there is 1 way to make the sum 0 (by picking nothing)
    x[0] = 1;
    int l=1e9+7;

    for (int i = 0; i < n; i++) {         // For each number in your list
        for (int j = v[i]; j <= c; j++) { // Update all possible sums from v[i] to c
            x[j] += x[j - v[i]];
            x[j]%=l;
        }
    }

    cout << x[c] << endl;
    return 0;
}