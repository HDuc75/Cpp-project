#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    if (t >= 0 && t <= 20) cout << "Mua Dong";
    if (t >= 21 && t <= 25) cout << "Mua Xuan";
    if (t >= 26 && t <= 30) cout << "Mua Thu";
    if (t > 30) cout << "Mua Ha";

    return 0;
}

