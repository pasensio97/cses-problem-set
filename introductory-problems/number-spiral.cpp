#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ll long long

int main(int argc, char const *argv[]) {
  int t;
  cin >> t;
  ll ans;
  while (t--) {
    ll y, x;
    cin >> y >> x;
    ll m = max(x, y);
    ans = (m - 1) * (m - 1) + m;
    if (x > y) {
      if (x & 1)
        ans += m - y;
      else {
        ans -= m - y;
      }
    }
    if (y > x) {
      if (y & 1)
        ans -= m - x;
      else {
        ans += m - x;
      }
    }
    cout << ans << "\n";
  }
  return 0;
}