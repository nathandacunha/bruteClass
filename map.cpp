#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // map é semelhante ao objetos em js********

    // map<string, int> mapa;
    // mapa["um"] = 1;
    // mapa["dois"] = 2;
    // mapa["tres"] = 100;

    // mapa["um"]++;
    // mapa["um"]++;
    // mapa["um"]++;
    


    // cout << mapa["um"] << endl;

    // é possivel usar map como um array em cpp

    int n;
    cin >> n;

    map<int, int> mapa;
    for(int i = 0; i < n; i++) {
        cin >> mapa[i];
    }

    for(int i = 0; i < n; i++) {
        cout << mapa[i] << endl;
    }
    return 0;
}