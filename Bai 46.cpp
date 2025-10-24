#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int sum = 0, tmp = n;
    while (tmp > 0) {
        sum += tmp % 10;
        tmp /= 10;
    }

    int nut = sum % 10;
    cout << nut << '\n';

    if (nut == 9)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}

