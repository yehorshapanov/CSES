//
//  trailing_zeros.cpp
//  test
//
//  Created by Yehor Shapanov on 9/23/19.
//  Copyright © 2019 Yehor Shapanov. All rights reserved.
//
#include "stdc++.h"
int main() {
    int n;
    cin >> n;
    cout << n / 5 + n / 25 + n / 125 + n / 625 + n / 3125 + n /15625 + n / 78125 + n / 390625 + n /1953125 + n /9765625 +
    n /48828125 + n / 244140625;
       
    return 0;
}
