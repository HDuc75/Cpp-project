#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    if (!(cin >> a >> b)) return 0;
    int ua = static_cast<int>(llabs(a) % 10);
    int ub = static_cast<int>(llabs(b) % 10);
    cout << (ua + ub) << '\n';
    return 0;
}

