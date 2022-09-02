#include <iostream>

using namespace std;

void part_1() {

    int a = 13 / 5;
    int b = 13 % 5;
    int c = 13.0 / 5;
    double d = 13 / 5;
    double e = 13 % 5;
    double f = 13.0 / 5;
    double g = 13 / 5 + 2 / 5;
    double h = 13.0 / 5 + 2.0 / 5;
    int i = 13.0 / 5 + 2.0 / 5;

    cout << "a: " << a << "\n"
         << "b: " << b << "\n"
         << "c: " << c << "\n"
         << "d: " << d << "\n"
         << "e: " << e << "\n"
         << "f: " << f << "\n"
         << "g: " << g << "\n"
         << "h: " << h << "\n"
         << "i: " << i << "\n";

}

void part_2() {
    int input, x, x2, x3;

    // Task 1
    cout << "x^4:\n";
    cin >> x;
    x = x * x;
    x = x * x;
    cout << x << "\n";
    // Task 2
    cout << "x^6:\n";
    cin >> x;
    x = x * x;
    x = x * x * x;
    cout << x << "\n";
    // Task 3
    cout << "x^7:\n";
    cin >> x;
    x2 = x * x;
    x = x2 * x2 * x2 * x;
    cout << x << "\n";
    // Task 4
    cout << "x^21:\n";
    cin >> x;
    x2 = x * x; // 2
    x2 = x2 * x2; // 4
    x3 = x2 * x2; // 8
    x = x3 * x3 * x2 * x; // 21
    cout << x << "\n";
    // Task 5
    cout << "last number\n";
    cin >> input;
    cout << input % 10 << "\n";
    // Task 6
    cout << "second number\n";
    cin >> input;
    cout << input / 10 << "\n";
    // Task 7
    cout << "second number v.2\n";
    cin >> input;
    cout << input % 100 / 10 << "\n";
    // Task 8
    cout << "number sum\n";
    cin >> input;
    cout << input / 100 + input % 100 / 10 + input % 10 << "\n";
    // Task 9
    cout << "Вася\n"
            "speed v:";
    cin >> x;
    cout << "time t:";
    cin >> x2;
    cout << x * x2 % 109 << "\n";
    // Task 10
    cout << "minutes\n";
    cin >> x;
    cout << x / 60 % 24 << ":" << x % 60 << "\n";
    // Task 11
    cout << "h\n";
    cin >> x;
    cout << "m\n";
    cin >> x2;
    cout << "s\n";
    cin >> x3;
    cout << x * 30 + x2 * 0.5 + x3 * 0.5 / 60 << "\n";

};

int main() {

    // part_1();
    part_2();

    return 0;
}