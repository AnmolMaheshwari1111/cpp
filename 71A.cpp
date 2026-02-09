#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int times;
    cin >> times;
    int i;
    for (int i = 0; i < times; i++)
    {
        string word;
        string nword;
        cin >> word;
        if (word.length()>10){
            nword=word.front()+to_string(word.length()-2)+word.back();
            cout << nword << '\n';
        }
        else {
            cout << word << '\n';
        }
    }
    return 0;
}