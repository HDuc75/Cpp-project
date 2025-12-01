#include <bits/stdc++.h>
using namespace std;

int main() {
    int d;
    cin >> d;

    // Dòng 1: Loai A / B / C
    if (d >= 80) {
        cout << "Loai A\n";

        if (d >= 90) cout << "Xuat sac";
        else cout << "Gioi";
    }
    else if (50 <= d && d < 80) {
        cout << "Loai B\n";

        if (d >= 65) cout << "Kha";
        else cout << "Trung binh";
    }
    else {  // d < 50
        cout << "Loai C\n";

        if (d >= 35) cout << "Yeu";
        else cout << "Kem";
    }

    return 0;
}

