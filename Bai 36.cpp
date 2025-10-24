#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double hki, hkii;
    cin >> hki >> hkii;

    double tbcn = (hki + hkii * 2.0) / 3.0;

    cout.setf(ios::fixed);
    cout << setprecision(1) << tbcn << '\n';

    if (tbcn >= 8.0) cout << "Gioi";
    if (tbcn >= 6.5 && tbcn < 8.0) cout << "Kha";
    if (tbcn >= 5.0 && tbcn < 6.5) cout << "Trung binh";
    if (tbcn >= 3.5 && tbcn < 5.0) cout << "Yeu";
    if (tbcn < 3.5) cout << "Kem";

    return 0;
}

