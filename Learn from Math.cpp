#include <bits/stdc++.h>
using namespace std;


bool isComposite(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    for (int x = 4; x < n; x++) {
        int y = n - x;
        if (isComposite(x) && isComposite(y)) {
            cout << x << " " << y << endl;
            return 0;
        }
    }

    return 0;
}
