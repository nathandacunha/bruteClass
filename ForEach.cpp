#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    
    // for each
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i <= n; i++) {
        cout << n << endl;
    }
    for(int u:v) {
        u++;
    }
    for(int u:v) {
        cout << u << endl;
    }

    cout << endl;

    return 0;
}