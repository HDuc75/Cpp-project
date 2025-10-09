#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a;
    if (!(cin >> a)) return 0;
   
    int sum = 0;
    sum += a % 10; a /= 10;
    sum += a % 10; a /= 10;
    sum += a % 10; a /= 10;
    sum += a % 10;
    cout << sum << '\n';
    return 0;
}

