#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a;
    if (!(cin >> a)) return 0;
    long long side = a / 4;        
    long long area = side * side;  
    cout << area << '\n';
    return 0;
}

