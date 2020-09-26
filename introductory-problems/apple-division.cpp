#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

#define ll long long
#define endl '\n'

int n;
ll totalSum = 0;

ll findMin(ll p[], int r, ll currSum) {
  // totalSum - currSum in set 1
  // currSum is set 2
  if (r == 0) // base case
    return abs((totalSum - currSum) - currSum);

  // We either include p[i] into second set or we don't
  // and we checl which opition give us the smollest value
  return min(findMin(p, r - 1, currSum + p[r - 1]), findMin(p, r - 1, currSum));
}

// 3 2 7 4 1

int main(int argc, char const *argv[]) {
  cin >> n;
  ll p[n];
  for (int i = 0; i < n; ++i)
    cin >> p[i], totalSum += p[i];

  cout << findMin(p, n, 0) << '\n';

  return 0;
}