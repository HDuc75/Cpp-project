#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a;
    if (!(cin >> a)) return 0;
    int units = a % 10;
    int tens  = a / 10;
    cout << units << ' ' << tens << '\n';
    return 0;
}

