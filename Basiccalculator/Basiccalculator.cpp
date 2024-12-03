#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num1, num2, op;
    cout << "Please enter number 1 \n";
    cin >> num1;
    cout << "Please enter number 2 \n";
    cin >> num2;
    cout << "[1] + \n";
    cout << "[2] - \n";
    cout << "[3] X \n ";
    cout << "[4] ÷ \n";
    cout << " choose your opreation \n";
    cin >> op;
    switch (op) {
    case 1 :
        cout << num1 + num2 ;
        break;
    case 2 :
        cout << num1 - num2;
        break;
    case 3:
        cout << num1 * num2;
        break;
    case 4:
        cout << num1 / num2;
        break;
    default :
        cout << "Invaild Number";
    }
    return 0;
}


