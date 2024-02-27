#include <iostream>

using namespace std;

int main() {
    int a, b, c, n;

    cout << "Введіть три цілих числа: ";
    cin >> a >> b >> c;

    cout << "Введіть останню цифру порядкового номера: ";
    cin >> n;

    if (a >= 1 && a <= n) {
        cout << a << " ";
    }
    if (b >= 1 && b <= n) {
        cout << b << " ";
    }
    if (c >= 1 && c <= n) {
        cout << c << " ";
    }

    return 0;
}