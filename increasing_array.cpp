//
//  increasing_array.cpp
//  test
//
//  Created by Yehor Shapanov on 9/23/19.
//  Copyright © 2019 Yehor Shapanov. All rights reserved.
//
#include "stdc++.h"
int main() {
    int n;
    cin >> n;
    int prev_el;
    cin >> prev_el;
    ll res = 0;
    for (int i = 0; i < n - 1; i++) {
        int curr_el;
        cin >> curr_el;
        if (curr_el < prev_el) { res += prev_el - curr_el; }
        else if (curr_el > prev_el) { prev_el = curr_el; }
    }
    cout << res;
    return 0;
}

