#include <bits/stdc++.h>
using namespace std;

bool namNhuan(int n) {
    return (n % 400 == 0) || (n % 4 == 0 && n % 100 != 0);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n;
    cin >> t >> n;

    int days = 0;
    if (t == 1 || t == 3 || t == 5 || t == 7 || t == 8 || t == 10 || t == 12)
        days = 31;
    else if (t == 4 || t == 6 || t == 9 || t == 11)
        days = 30;
    else if (t == 2)
        days = namNhuan(n) ? 29 : 28;

    cout << days;
    return 0;
}

