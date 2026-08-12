#include <bits/stdc++.h>
using namespace std;

int main() {
    long long T;
    cin >> T;

    while (T--) {
        long long L, R;
        cin >> L >> R;

        if (L > R)
            swap(L, R);

        cout << R * (R + 1) / 2 - (L - 1) * L / 2 << '\n';
    }
}