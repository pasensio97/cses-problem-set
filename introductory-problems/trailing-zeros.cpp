#include <bits/stdc++.h>
#include <iostream>
#include <ostream>

using namespace std;

#define ll long long

int main(int argc, char const *argv[]) {

  ll n, ans = 0;
  cin >> n;
  for (ll i = 5; i <= n; i *= 5) {
    ans += n / i;
  }
  cout << ans << '\n';
  return 0;
}
