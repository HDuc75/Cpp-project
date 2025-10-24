#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b;
    if (!(cin >> a >> b)) return 0;
    const double EPS = 1e-9;
    if (a > b + EPS) cout << "An\n";
    else if (b > a + EPS) cout << "Binh\n";
    else cout << "Bang nhau\n";
    return 0;
}

