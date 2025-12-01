#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    // Dòng 1: Chan ho?c Le
    if (n % 2 == 0)
        cout << "Chan\n";
    else
        cout << "Le\n";

    // Dòng 2: Duong / Am / Khong
    if (n > 0)
        cout << "Duong";
    else if (n < 0)
        cout << "Am";
    else
        cout << "Khong";

    return 0;
}

