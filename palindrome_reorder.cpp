//
//  palindrome_reorder.cpp
//  test
//
//  Created by Yehor Shapanov on 9/24/19.
//  Copyright © 2019 Yehor Shapanov. All rights reserved.
//
#include "stdc++.h"
int main() {
    string t;
    cin >> t;
    for (int i = 0; i < (int)t.size()/2; i++) {
        int j = (int)t.size() - i - 1;
        if (t[i] != t[j]) {
            if (j-i == 1) {
               cout << "NO SOLUTION";
               return 0;
            }
            for (int x = i + 1; x < j; x++) {
                if (t[x] == t[i]) {
                    swap(t[x], t[j]);
                    break;
                }
                if (t[x] == t[j]) {
                    swap(t[x], t[i]);
                    break;
                }
                if (x == j - 1) {
                    cout << "NO SOLUTION";
                    return 0;
                }
            }
        }
    }
    cout << t;
    return 0;
}
