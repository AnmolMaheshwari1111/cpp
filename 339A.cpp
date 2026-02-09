#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;
    int one = count(s.begin(),s.end(),'1');
    int two = count(s.begin(),s.end(),'2');
    int three = count(s.begin(),s.end(),'3');
    s="";
    for (int i = 0; i < one; i++)
    {
        s+="1+";
    }
    for (int i = 0; i < two; i++)
    {
        s+="2+";
    }
    for (int i = 0; i < three; i++)
    {
        s+="3+";
    }
    s.pop_back();
    cout << s;
    return 0;
}