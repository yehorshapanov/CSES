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
    int left = 0, right = 0;
    queue<int> left_queue, right_queue;
    for (int i = 0; i < n / 2; i++) {
        if (n % 2) {
            if (i % 2) {
                left += i + 1;
                right += n - i;
                left_queue.push(i + 1);
                right_queue.push(n - i);
            } else {
                right += i + 1;
                left += n - i;
                left_queue.push(n - i);
                right_queue.push(i + 1);
            }
        } else {
            if (i % 2) {
                right += i + 1;
                right += n - i;
                right_queue.push(n - i);
                right_queue.push(i + 1);
            } else {
                left += i + 1;
                left += n - i;
                left_queue.push(i + 1);
                left_queue.push(n - i);
            }
        }
    }
    
    if (n % 2 == 0) {
        if (left == right) {
            cout << "YES" << endl;
        } else {
            cout << "NO";
            return 0;
        }
    } else {
        int el = n / 2 + 1;
        if (abs(left - right) == el) {
            cout << "YES" << endl;
            if (left > right) {
                right_queue.push(el);
            } else {
                left_queue.push(el);
            }
        } else {
            cout << "NO";
            return 0;
        }
    }
    cout << left_queue.size() << endl;
    while (!left_queue.empty()) { cout << left_queue.front() << " "; left_queue.pop(); }
    cout << endl << right_queue.size() << endl;
    while (!right_queue.empty()) { cout << right_queue.front() << " "; right_queue.pop(); }
    return 0;
}
