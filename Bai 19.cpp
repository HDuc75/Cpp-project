#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    if (!(cin >> a >> b >> c)) return 0;
    int desks = (a + 1) / 2 + (b + 1) / 2 + (c + 1) / 2;
    cout << desks << '\n';
    return 0;
}

