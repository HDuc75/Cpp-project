#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long double a;
    if (!(cin >> a)) return 0;
    const long double PI = acosl(-1.0L);
    long double area = a * a / (4.0L * PI);
    cout.setf(ios::fixed);
    cout << setprecision(2) << (double)area << '\n';
    return 0;
}

