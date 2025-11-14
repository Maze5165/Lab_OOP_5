#include <iostream>
#include "Longlong.h"
#include <Windows.h>
using namespace std;

int main() {
    Longlong a, b;
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    cout << "Введіть значення a:\n";
    a.Read();
    cout << "Введіть значення b:\n";
    b.Read();

    cout << "\nРезультати:\n";
    cout << "a = "; a.Display();
    cout << "b = "; b.Display();

    cout << "a + b = "; (a + b).Display();
    cout << "a - b = "; (a - b).Display();
    cout << "a * b = "; (a * b).Display();

    cout << "a == b: " << (a == b ? "так" : "ні") << endl;
    cout << "a > b: " << (a.greater(b) ? "так" : "ні") << endl;
    cout << "a < b: " << (a.less(b) ? "так" : "ні") << endl;

    return 0;
}