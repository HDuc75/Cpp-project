#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    if (n > 80)
        cout << "Beo phi";
    else if (n < 45)
        cout << "Suy dinh duong";
    else
        cout << "Binh thuong";

    return 0;
}

