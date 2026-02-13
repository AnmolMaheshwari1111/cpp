#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,q,m,x,v,l,r;
    int o=0;
    cin >> n >> q;
    vector<int> array;
    for (int i = 0; i < n; i++){
        cin >> m;
        array.push_back(m);
    }
    for (int i = 0; i < q; i++){
        cin >> m;
        if (m==1){
            cin >> x >> v;
            array[x-1]=v;
        }
        if (m==2){
            cin >> l >> r;
            for (int j = l-1; j < r-1; j++){
                for (int k = j+1; k < r; k++){
                    if(array[j]>array[k]){
                        o+=1;
                    }
                }
            }
            cout << o << '\n';
            o=0;
        }
    }
    return 0;
}