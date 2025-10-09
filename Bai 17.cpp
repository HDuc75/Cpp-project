#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long N;
    if (!(cin >> N)) return 0;
    long long a5000 = N / 5000;
    long long rem = N % 5000;
    long long a2000 = rem / 2000;
    rem %= 2000;
    long long a1000 = rem / 1000;
    cout << a5000 << ' ' << a2000 << ' ' << a1000 << '\n';
    return 0;
}

