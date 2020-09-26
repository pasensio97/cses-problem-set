#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(int argc, char const *argv[])
{
    ll n, s = 0;
    cin >> n;
    for (int i = 1; i < n; ++i)
    {
        ll a;
        cin >> a;
        s += a;
    }
    cout << n * (n + 1) / 2 - s;

    return 0;
}