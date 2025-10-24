#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;

    if (n < 0) {
        cout << "No";
        return 0;
    }

    long long k = sqrtl(n);
    if (k * k == n)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}

