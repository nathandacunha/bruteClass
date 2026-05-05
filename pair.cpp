#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    pair<string, int> p;
    p.first = "Um";
    p.second = 1;

    p.first += 'z';
    p.second = p.second * 20;

    cout << p.first << "" << p.second << endl;

    return 0;
}