#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ll long long
#define endl '\n'

#define L 8

string s[L];
unsigned ll ans;

bool isValid(int row, int col) {
  // check locked
  if (s[row][col] == '*')
    return false;

  // check cols
  for (int i = 0; i < L; ++i)
    if (s[i][col] == 'q')
      return false;

  // check pos slope
  for (int i = row, j = col; i >= 0 && j < L; --i, ++j)
    if (s[i][j] == 'q')
      return false;

  // check neg slope
  for (int i = row, j = col; i >= 0 && j >= 0; --i, --j)
    if (s[i][j] == 'q')
      return false;

  return true;
}

void count(int row) {
  if (row == L) {
    ans++;
    return;
  }
  for (int col = 0; col < L; ++col) {
    if (isValid(row, col)) {
      s[row][col] = 'q';
      count(row + 1);
      s[row][col] = '.';
    }
  }
}

int main(int argc, char const *argv[]) {

  for (int i = 0; i < L; ++i)
    cin >> s[i];

  count(0);
  cout << ans << endl;
  return 0;
}