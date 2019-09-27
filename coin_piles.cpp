//
//  coin_piles.cpp
//  test
//
//  Created by Yehor Shapanov on 9/23/19.
//  Copyright © 2019 Yehor Shapanov. All rights reserved.
//
#include "stdc++.h"
using namespace std;
typedef long long ll;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) {
            cout << "YES" << endl;
        }
        else if (a == 0 || b == 0) {
            cout << "NO" << endl;
        } else {
            if(a<b)swap(a,b);
            if (a>2*b) {
                cout << "NO" << endl;
            } else {
                cout << ((a%3 + b%3)%3 ? "NO" : "YES") << endl;
            }
        }
    }
       
    return 0;
}
