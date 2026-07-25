#include<bits/stdc++.h>
int reverse(int x) {
        long long revnum = 0;
        while (x) {
            int ld = x % 10;
            revnum = revnum * 10 + ld;

            x /= 10;
        }

        if (revnum < INT_MIN || revnum > INT_MAX) {
            return 0;
        }

        return revnum;
    }