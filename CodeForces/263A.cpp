#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int p,n;
    for (int i = 0; i < 25; i++)
    {
        cin >> p;
        if (p==1){
            n=i;
        }
    }
    p=floor(n/5)+1;
    cout << abs(3-p)+abs(2-n%5);
    return 0;
}