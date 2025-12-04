#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    
    if (t < 18) {
        cout << "Tre em\n";
    } else if (t < 60) {
        cout << "Nguoi truong thanh\n";
    } else {
        cout << "Nguoi cao tuoi\n";
    }

    
    if (t < 18) {
        if (t <= 6) cout << "Tre mam non";
        else if (t <= 11) cout << "Tre tieu hoc";
        else cout << "Tre trung hoc";
    }
    else if (t < 60) {
        if (t <= 23) cout << "Sinh vien";
        else cout << "Nguoi di lam";
    }
    else { // t >= 60
        if (t <= 62) cout << "Sap nghi huu";
        else cout << "Da nghi huu";
    }

    return 0;
}

