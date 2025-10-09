#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long a;
    if (!(cin >> a)) return 0;
    long long num5000 = a / 5000;
    long long rem = a % 5000;
    cout << num5000 << ' ' << rem << '\n';
    return 0;
}

