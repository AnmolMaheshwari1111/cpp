#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x=0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        string w;
        cin >> w;
        if (w=="X++" or w=="++X") {
            x++;
        }
        else {
            --x;
        }
    }
    cout << x;
    return 0;
}