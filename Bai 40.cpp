#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    cin >> a >> b;

    if (a == 0 || b == 0) cout << 0;
    if ((a > 0 && b > 0) || (a < 0 && b < 0)) cout << 1;
    if ((a > 0 && b < 0) || (a < 0 && b > 0)) cout << -1;

    return 0;
}

