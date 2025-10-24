#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int thang;
    cin >> thang;

    if (thang == 2 || thang == 3 || thang == 4) cout << "Xuan";
    if (thang == 5 || thang == 6 || thang == 7) cout << "Ha";
    if (thang == 8 || thang == 9 || thang == 10) cout << "Thu";
    if (thang == 11 || thang == 12 || thang == 1) cout << "Dong";

    return 0;
}

