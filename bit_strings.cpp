//
//  bit_strings.cpp
//  test
//
//  Created by Yehor Shapanov on 9/23/19.
//  Copyright © 2019 Yehor Shapanov. All rights reserved.
//
#include "stdc++.h"

int t = 1073741824;
int main() {
    int i;
    cin >> i;
    int mod = 1e9 + 7;
    
        int x = i / 30;
        ll o = 1;
        while(x) {
            x--;
            o = (o*t) % mod;
        }
        x = i % 30;
        while(x) {
            x--;
            o = (o*2) % mod;
        }
        
        cout << o << endl;
    
    return 0;
}
