//
//  number_spiral.cpp
//  test
//
//  Created by Yehor Shapanov on 9/23/19.
//  Copyright © 2019 Yehor Shapanov. All rights reserved.
//
#include "stdc++.h"
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll x, y;
        cin >> y >> x;
        if (x == 1 && y == 1) {
            cout << 1 << endl;
            continue;
        }
        ll d = max(x, y);
        ll diag = d*d - d + 1;
        if (x == y) {
            cout << diag << endl;
        } else if (x < d) {
            if (y % 2) {
                cout << diag - d + x << endl;
            } else {
                cout << diag + d - x << endl;
            }
        } else {
            if (x % 2) {
                cout << diag - y + d<< endl;
            } else {
                cout << diag + y - d << endl;
            }
        }
    }
    return 0;
}
