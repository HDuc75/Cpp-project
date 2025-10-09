#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    if (!(cin >> n)) return 0;

    long long hours = n / 3600;
    long long minutes = (n % 3600) / 60;
    long long seconds = n % 60;

    cout << hours << ':' << minutes << ':' << seconds << '\n';
    return 0;
}

