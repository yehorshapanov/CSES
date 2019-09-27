//
//  apple_division.cpp
//  test
//
//  Created by Yehor Shapanov on 9/24/19.
//  Copyright © 2019 Yehor Shapanov. All rights reserved.
//
#include "stdc++.h"
int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    ll m = p[0];
    vector<bool> v(n);
    for (int x = 0; x <= n/2; x++) {
    fill(v.end() - x, v.end(), true);
    do {
        ll left_sum = 0;
        ll right_sum = 0;
        for (int i = 0; i < n; i++) {
            if (v[i]) {
                left_sum += p[i];
            } else {
                right_sum += p[i];
            }
        }
        m = min(m, abs(right_sum - left_sum));
    } while(next_permutation(v.begin(), v.end()));
    }
    cout << m;
    return 0;
}
