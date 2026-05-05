#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> frequencia;
    int n; cin >> n;

    vector<int> v(n);

    for(int u : v) {
        frequencia[u]++;
    }

    // exemplo 2
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    map<int, int> freq;
    for(int i = 0; i < n; i++) {
        freq[v[i]]++;
    }

    for(pair<int, int> p: freq) {
        cout << p.first << ' ' << p.second << endl;
    }

    return 0;
}