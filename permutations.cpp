//
//  permutations.cpp
//  test
//
//  Created by Yehor Shapanov on 9/23/19.
//  Copyright © 2019 Yehor Shapanov. All rights reserved.
//
#include "stdc++.h"
int main() {
    int n;
    cin >> n;
    int l = n - n / 2;
    
    if (n == 3 || n == 2) {
        cout << "NO SOLUTION";
        return 0;
    }
    
    for (int x = n / 2; x > 0; x--) {
        cout << l-- << " ";
        cout << n-- << " ";
    }
    if (l) cout << l;
    return 0;
}
