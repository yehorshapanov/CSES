//
//  weird_algorithm.cpp
//  test
//
//  Created by Yehor Shapanov on 9/23/19.
//  Copyright © 2019 Yehor Shapanov. All rights reserved.
//
#include "stdc++.h"
int main() {
    ll n;
    cin >> n;
    queue<ll> q;
    while(n != 1) {
        q.push(n);
        n = (n % 2) ? n * 3 + 1 : n / 2;
    }
    q.push(n);
    while(!q.empty()) { cout << q.front() << " "; q.pop(); }
    return 0;
}
