#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,w,z=0;
    cin >> n >> k;
    for (int i = 0; i < k; i++){
        cin >> w;
        if (w>0) {
            z+=1;
        }
    }
    int r;
    for (int i = 0; i < (n-k); i++)
    {
        cin >> r;
        if (r==w && w>0){
            z+=1;
        }
    }
    cout << z;
    return 0;
}