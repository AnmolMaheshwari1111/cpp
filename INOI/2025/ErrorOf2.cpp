#include <bits/stdc++.h>
#include <vector>
#include <list>
void addEdge(vector<pair<int,int>> adj[], int u, int v , int w){
    adj[u].push_back({v,w});
    adj[v].push_back({u,w});
}
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n,q;
        cin >> n >> q;
        vector<int> adj[n];
        for (int j = 0; i < n-1; i++){
            int u,v,w;
            cin >> u >> v >> w;
            addEdge(adj,u,v,w);
        }        
    }
    return 0;
}