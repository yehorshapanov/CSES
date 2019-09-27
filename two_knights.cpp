//
//  two_knights.cpp
//  test
//
//  Created by Yehor Shapanov on 9/23/19.
//  Copyright © 2019 Yehor Shapanov. All rights reserved.
//
#include "stdc++.h"
ll comb(ll n) {
    return n*(n-1)/2;
}
int main() {
    int n;
    cin >> n;
    if (n > 1) {
        cout << 0 << endl;
    }
    if (n > 2) {
        cout << 6 << endl;
    }
    for (ll k = 3; k <= n; k++) {
        
        cout << comb(k*k) - 4LL*(k-1)*(k-2) << '\n';
    }
    return 0;
}
