#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    if (!(cin >> a >> b)) return 0;

    if (a < b) cout << "An\n";
    if (b < a) cout << "Binh\n";
    if (a == b) cout << "Bang nhau\n";

    return 0;
}

