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
    int n, j;
    cin >> n;
    if (n<3||n*(n+1)/2%2){
        cout << "NO\n";
        return 0;
    }
    
    vector<int> v1, v2;
    if (n%4)
        j = 3;
    else
        j = 4;
    
    for (int i = 0; i < (n-1)/4  ; i++){
        v1.push_back(4*i+1 + j);
        v1.push_back(4*i+4 + j);
        v2.push_back(4*i+2 + j);
        v2.push_back(4*i+3 + j);
    }
    if(n%4){
        v1.push_back(1);
        v1.push_back(2);
        v2.push_back(3);
    }else{
        v1.push_back(1);
        v1.push_back(4);
        v2.push_back(2);
        v2.push_back(3);
    }
    cout << "YES\n";
    cout << v1.size() << endl;
    for (auto v : v1)
        cout << v << ' ';
    cout << endl; 
    cout << v2.size() << endl;
    for (auto v : v2)
        cout << v << ' ';

    cout << endl;  
    return 0;
}