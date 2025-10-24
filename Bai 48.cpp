#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, c;
    cin >> a >> b >> c;

    // Ki?m tra di?u ki?n t?o thành tam giác
    if (a + b > c && a + c > b && b + c > a) {
        cout << "Yes\n";

        if (a == b && b == c)
            cout << "Deu";
        else if (a == b || b == c || c == a)
            cout << "Can";
        else if (a * a + b * b == c * c ||
                 b * b + c * c == a * a ||
                 c * c + a * a == b * b)
            cout << "Vuong";
        else
            cout << "Thuong";
    } 
    else {
        cout << "No";
    }

    return 0;
}

