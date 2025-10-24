#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    if (t > 0 && t <= 11) cout << "Thieu nhi";
    if (t > 11 && t <= 25) cout << "Thieu nien";
    if (t > 25 && t <= 50) cout << "Trung nien";
    if (t > 50) cout << "Lao nien";
    return 0;
}

