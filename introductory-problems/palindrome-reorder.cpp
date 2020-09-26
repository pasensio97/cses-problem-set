#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <map>
#include <ostream>
#include <string>

using namespace std;

#define ll long long

int main(int argc, char const *argv[]) {
  string s;
  cin >> s;

  int c[26] = {}, c1 = 0;
  for (char d : s)
    ++c[d - 'A'];
  for (int i = 0; i < 26; i++) {
    c1 += c[i] & 1;
  }
  if (c1 > 1) {
    cout << "NO SOLUTION\n";
    return 0;
  }
  string t;
  for (int i = 0; i < 26; ++i)
    if (!(c[i] & 1)) // if even
      for (int j = 0; j < c[i] / 2; ++j)
        t += (char)('A' + i);

  cout << t;
  for (int i = 0; i < 26; ++i)
    if (c[i] & 1) // if odd
      for (int j = 0; j < c[i]; ++j)
        cout << (char)('A' + i);

  reverse(t.begin(), t.end());
  cout << t << "\n";

  return 0;
}
