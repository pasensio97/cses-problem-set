#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    char last = 'A';
    int count = 0;
    int max_count = 1;

    for (auto c : s)
    {
        if (last == c)
        {
            count++;
            max_count = max(count, max_count);
        }
        else
        {
            last = c;
            count = 1;
        }
    }
    cout << max_count;
    return 0;
}