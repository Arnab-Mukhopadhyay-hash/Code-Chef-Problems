#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int withdrawal;
    double balance;
    cin >> withdrawal >> balance;
    if ((withdrawal % 5 == 0) && (withdrawal + 0.50 <= balance))
    {
        cout << fixed << setprecision(2) << balance - withdrawal - 0.50 << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << balance << endl;
    }
    return 0;
}