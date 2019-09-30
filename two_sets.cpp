//
//  two_sets.cpp
//  test
//
//  Created by Yehor Shapanov on 9/23/19.
//  Copyright © 2019 Yehor Shapanov. All rights reserved.
#include "stdc++.h"
int main() {    
    int n;
    cin >> n;
    int t = n * (n + 1) / 2;
    if (t % 2) cout << "NO\n";
    else {
      t /= 2;
      vector<int> a;
      int s = 0;
      int e = 0;
      int i = n;
      while (true) {
        a.push_back(i);
        s += i--;
        e = t - s;
        if (!e) break;
        if (e <= i) {
          a.push_back(e);
          break;
        }
      }
      cout << "YES\n" << a.size() << endl;
      for (int j = 0; j < a.size(); j++) {
        cout << a[j];
        if (j < a.size() - 1) cout << " ";
      }
      cout << endl;
      cout << n - a.size() << endl;
      for (int j = i; j > 0; j--) {
        if (j == e) continue;
        cout << j;
        if ((e != 1 && j > 1) || (e == 1 && j > 2)) cout << " ";
      }
      cout << endl;
    }
}
