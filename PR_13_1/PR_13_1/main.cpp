#include <iostream>
#include <iomanip>
#include <cmath>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main() {
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx  = "; cin >> dx;
    cout << "e   = "; cin >> e;
    cout << endl;

    // Вивід шапки таблиці
    cout << string(54, '-') << endl;
    cout << "|" << setw(8) << "x" << " |"
        << setw(12) << "f(x)" << " |"
        << setw(12) << "Sum" << " |"
        << setw(10) << "n" << " |" << endl;
    cout << string(54, '-') << endl;

    x = x_p;
    while (x <= x_k) {
        sum(); // виклик процедури обчислення суми

        // Форматний вивід рядка таблиці
        cout << "|" << setw(8) << fixed << setprecision(3) << x << " |"
            << setw(12) << fixed << setprecision(6) << log((x + 1.0) / (x - 1.0)) << " |"
            << setw(12) << fixed << setprecision(6) << s << " |"
            << setw(10) << n << " |" << endl;

        x += dx;
    }

    cout << string(54, '-') << endl;

    cin.get();
    return 0;
}