//
//  creating_strings_i.cpp
//  test
//
//  Created by Yehor Shapanov on 9/24/19.
//  Copyright © 2019 Yehor Shapanov. All rights reserved.
//
#include "stdc++.h"
int main() {
    string t;
    cin >> t;
    sort(t.begin(), t.end());
    vector<string> result;
    result.push_back(t);
    while(next_permutation(t.begin(), t.end())) {
        result.push_back(t);
    }
    sort(result.begin(), result.end());
    cout << result.size() << endl;
    for (auto s : result) cout << s << endl;
    return 0;
}
