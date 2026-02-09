#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string a,b;
    cin >> a >> b;
    ranges::transform(a,a.begin(),[](unsigned char c){return tolower(c);});
    ranges::transform(b,b.begin(),[](unsigned char c){return tolower(c);});
    if (a==b){
        cout << 0;
    }
    else if (a>b){
        cout << 1;
    }
    else {
        cout << -1;
    }
    return 0;
}