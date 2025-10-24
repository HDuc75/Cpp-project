#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long tien = 0;

    if (n >= 1) tien += 12000;
    if (n > 1 && n <= 30) tien += (n - 1) * 10000;
    if (n > 30) tien += 29 * 10000 + (n - 30) * 9000;

    cout << tien;

    return 0;
}

