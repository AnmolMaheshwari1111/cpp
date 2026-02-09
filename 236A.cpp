#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string x;
    cin >> x;
    int y=0;
    for (int i = 0; i < x.length(); i++){
        if (i==x.find_first_of(x[i])){
            y+=1;
        }
    }
    if (y%2==0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    return 0;
} 