#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b;
    if (!(cin >> a >> b)) return 0;
    long long aa = (a >= 0 ? a : -a);
    long long bb = (b >= 0 ? b : -b);

    int unitA = static_cast<int>(aa % 10);
    int tensB = static_cast<int>((bb / 10) % 10);

    cout << (unitA + tensB) << '\n';
    return 0;
}

