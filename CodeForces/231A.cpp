#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int r=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        int a,b,c;
        cin >> a >> b >> c;
        if (a+b+c>1){
            r+=1;
        }
    }
    cout << r;
    return 0;
}