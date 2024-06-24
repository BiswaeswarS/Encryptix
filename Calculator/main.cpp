#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter two numbers" << endl;
    double a, b;
    cin >> a >> b;
    cout << "Choose an operation to perform :" << endl;
    cout << 1 << " " << ":" << " " << "Addition" << endl;
    cout << 2 << " " << ":" << " " << "Subtraction" << endl;
    cout << 3 << " " << ":" << " " << "Multiplication" << endl;
    cout << 4 << " " << ":" << " " << "Division" << endl;
    int inp;
    cin >> inp;
    double ans;
    switch (inp) {
        case 1:
            ans = a + b;
            cout << "Result is : " << ans << endl;
            break;
        case 2:
            ans = a - b;
            cout << "Result is : " << ans << endl;
            break;
        case 3:
            ans = a * b;
            cout << "Result is : " << ans << endl;
            break;
        case 4:
            ans = a / b;
            cout << "Result is : " << ans << endl;
            break;
            return 0;
        default:
            cout << "Invalid option" << endl;
    }
}