#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    for(int i = 0; i < n; i++) {

        int target;
        cin >> target;
        bool achou = false;

        int l = 0, r = n -1;
        while(l <= r) {
            int mid = (1+r)/2;

            if(vec[mid] <= target) {
                achou = true;
                break;
            } else if(vec[mid] < target) {
                l = mid +1;
            } else {
                r = mid - 1;
            }
        }
    }
}