#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    if (!(cin >> a >> b)) return 0;
    int pieces = a / b;
    int rem = a % b;
    cout << pieces << ' ' << rem << '\n';
    return 0;
}

