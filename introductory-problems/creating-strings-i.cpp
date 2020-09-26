#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

#define ll long long

int main(int argc, char const *argv[]) {
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  vector<string> ans;

  do {
    ans.push_back(s);
  } while (next_permutation(s.begin(), s.end()));

  //   while (next_permutation(s.begin(), s.end())) // fails by 1
  //     ans.push_back(s);

  cout << ans.size() << "\n";
  for (auto s : ans) {
    cout << s << "\n";
  }

  return 0;
}