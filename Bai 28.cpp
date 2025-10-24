#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double toan, van, anh;
    if (!(cin >> toan >> van >> anh)) return 0;
    double tb = (toan * 2.0 + van * 2.0 + anh) / 5.0;
    cout.setf(ios::fixed);
    cout << setprecision(1) << tb << '\n';
    return 0;
}

