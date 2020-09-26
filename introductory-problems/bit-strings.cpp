#include <bits/stdc++.h>

using namespace std;

#define ll long long

int sum(int n){
    return (n*n+n)/2;
}
    

void gauss_method(int n){
    cout << n/2 << endl;
    for (auto i = 1; i < n/2 +1 ;i += 2 ){
        cout << i << ' ' << n-i+1 << ' ' ;
    }
    cout << '\n'<< n/2 << endl;
    for (auto i = 2; i < n/2+1;i += 2 ){
        cout << i << ' ' << n-i+1 << ' ' ;
    }
}

int main(int argc, char const *argv[])
{
    int n, s=1;
    cin >> n;
    for (int i = 0; i < n; i++)
        s = 2*s%((int)1e9+7);
    cout << s << '\n';
    return 0;
}