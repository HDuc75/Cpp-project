#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long double a, b;
    cin >> a >> b;

    int months = 0;
    while (a < b) {
        a *= 1.02;  
        months++;
    }

    cout << months;
    return 0;
}

