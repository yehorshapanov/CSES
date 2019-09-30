//
//  grid_paths.cpp
//  test
//
//  Created by Yehor Shapanov on 9/26/19.
//  Copyright © 2019 Yehor Shapanov. All rights reserved.
//
#include <iostream>
#include <queue>
#include <sstream>
#include <list>
#include <queue>
#include <cmath>
#include <algorithm>
#include <climits>
#include <fstream>
using namespace std;
typedef long long ll;


int recoursive_subroutine(vector<vector<int>>& field, string& query, int y, int x, int i, char m) {
  if (i == 48) return 1;
  if (field[6][0]) return 0;
  if (m == 'L' && (x == 0 || field[y][x-1]) && y > 0 && y < 6 && !field[y-1][x] && !field[y+1][x]) return 0;
  if (m == 'R' && (x == 6 || field[y][x+1]) && y > 0 && y < 6 && !field[y-1][x] && !field[y+1][x]) return 0;
  if (m == 'U' && (y == 0 || field[y-1][x]) && x > 0 && x < 6 && !field[y][x-1] && !field[y][x+1]) return 0;
  if (m == 'D' && (y == 6 || field[y+1][x]) && x > 0 && x < 6 && !field[y][x-1] && !field[y][x+1]) return 0;
  if (query[i] == '?') {
    int r[] = {-1, 0, 1, 0};
    int c[] = {0, -1, 0, 1};
    int k = 0;
    for (int j = 0; j < 4; j++) {
      int yy = y + r[j];
      int xx = x + c[j];
      if (yy < 0 || yy > 6) continue;
      if (xx < 0 || xx > 6) continue;
      if (field[yy][xx]) continue;
      field[yy][xx] = true;
      k += recoursive_subroutine(field, query, yy, xx, i + 1, "ULDR"[j]);
      field[yy][xx] = false;
    }
    return k;
  }
  if (query[i] == 'L') x--;
  else if (query[i] == 'R') x++;
  else if (query[i] == 'U') y--;
  else if (query[i] == 'D') y++;
  if (x < 0 || x > 6) return 0;
  if (y < 0 || y > 6) return 0;
  if (field[y][x]) return 0;
  field[y][x] = true;
  int k = recoursive_subroutine(field, query, y, x, i + 1, query[i]);
  field[y][x] = false;
  return k;
}

int main() {
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    string s;
    cin >> s;
    vector<vector<int>> field(7, vector<int>(7));
    field[0][0] = 1;
    cout << recoursive_subroutine(field, s, 0, 0, 0, 0) << endl;
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();

    std::cout << "Time difference = " << std::chrono::duration_cast<std::chrono::minutes>(end - begin).count() << "[min]" << std::endl;
    return 0;
}
