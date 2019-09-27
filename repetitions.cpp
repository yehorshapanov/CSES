//
//  repetitions.cpp
//  test
//
//  Created by Yehor Shapanov on 9/23/19.
//  Copyright © 2019 Yehor Shapanov. All rights reserved.
//
#include "stdc++.h"
int main() {
    string s;
    cin >> s;
    int n = (int)s.length();
    int i = 1;
    char prevc;
    stringstream ss(s);
    ss >> prevc;
    int res = 0;
    while(--n) {
        char curc;
        ss >> curc;
        if (curc == prevc) {
            i++;
        } else {
            res = max(res, i);
            i = 1;
            prevc = curc;
        }
    }
    res = max(res, i);
    cout << res;
    return 0;
}
