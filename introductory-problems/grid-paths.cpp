#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <iterator>
#include <string>

using namespace std;

#define ll long long
#define endl '\n'

#define L 7

int ans = 0;
string s;
bool vis[L][L];

bool e(int x, int y) {
  return x >= 0 && x < L && y >= 0 && y < L && !vis[x][y];
}

void find_paths(int x, int y, int count = 0) {
  // cout << x << ' ' << y << ' ' << count << endl;
  if (x == 0 && y == 6) {
    if (count == 48) {
      ++ans;
    }
    return;
  }

  vis[x][y] = 1;
  if (s[count] == '?' || s[count] == 'D') {
    if (y < (L - 1) && !vis[x][y + 1])
      if (!(!e(x, y + 2) && e(x - 1, y + 1) && e(x + 1, y + 1)))
        // -------------------------
        // if not empty 2 ahead, if empty left and right from 1 ahead,
        //  doesnt work
        // -------------------------
        find_paths(x, y + 1, count + 1);
  }

  if (s[count] == '?' || s[count] == 'U') {
    if (y && !vis[x][y - 1])
      if (!(!e(x, y - 2) && e(x - 1, y - 1) && e(x + 1, y - 1)))
        find_paths(x, y - 1, count + 1);
  }

  if (s[count] == '?' || s[count] == 'R') {
    if (x < (L - 1) && !vis[x + 1][y])
      if (!(!e(x + 2, y) && e(x + 1, y - 1) && e(x + 1, y + 1)))
        find_paths(x + 1, y, count + 1);
  }

  if (s[count] == '?' || s[count] == 'L') {
    if (x && !vis[x - 1][y])
      if (!(!e(x - 2, y) && e(x - 1, y + 1) && e(x - 1, y - 1)))
        find_paths(x - 1, y, count + 1);
  }
  vis[x][y] = 0;
}
int main(int argc, char const *argv[]) {

  cin >> s;
  find_paths(0, 0);
  cout << ans << endl;
  return 0;
}