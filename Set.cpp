#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    cin >> n;
    set<int> st;

    // st.emplace(5);
    st.insert(3);
    st.insert(2);
    st.insert(1);

    for(int u : st) {
        cout << u << endl;
    }
    return 0;
}