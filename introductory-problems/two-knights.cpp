#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll combinations(int i){
    return (ll) ((pow(i,4) - pow(i, 2)) / 2 - 4*(i-1)*(i-2));
}




int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    for(int i=1;i<n+1;i++){    
        cout << combinations(i) << endl;
    }
    return 0;
}
