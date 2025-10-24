#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c;
    if (!(cin >> a >> b >> c)) return 0;
    long long mx = a;
    if (b > mx) mx = b;
    if (c > mx) mx = c;
    cout << mx << '\n';
    return 0;
}

