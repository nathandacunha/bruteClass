#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, int> frequencia;
    int n; cin >> n;

    vector<int> v(n);

    for(int u : v) {
        frequencia[u]++;
    }

    return 0;
}