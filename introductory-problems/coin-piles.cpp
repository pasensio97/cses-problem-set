#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>
#include <ostream>

using namespace std;

#define ll long long

int main(int argc, char const *argv[]) {
  int t;
  cin >> t;

  int a, b;
  for (int i = 0; i < t; i++) {
    cin >> a >> b;

    if ((a + b) % 3 == 0 && 2 * a >= b && 2 * b >= a) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
