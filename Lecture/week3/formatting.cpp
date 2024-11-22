#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double val = 12.57275;

    cout << "\"" << setw(10) << val << "\"" << endl;
    cout << "\"" << setprecision(3) << val << "\"" << endl;
    cout << "\"" << setprecision(3) << fixed  << val << "\"" << endl;
    cout << "\"" << setprecision(3) << showpoint << val << "\"" << endl;
    cout << "\"" << left << setw(10) << val << "\"" << endl;

    return 0;
}