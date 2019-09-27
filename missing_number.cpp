//
//  missing_number.cpp
//  test
//
//  Created by Yehor Shapanov on 9/23/19.
//  Copyright © 2019 Yehor Shapanov. All rights reserved.
//
#include "stdc++.h"
int main() {
    ll x;
    cin >> x;
    ll sum = (x + 1)*x/2;
    ll res = 0;
    while(--x) {
        ll y;
        cin >> y;
        res += y;
    }
    cout << sum - res;
    return 0;
}
