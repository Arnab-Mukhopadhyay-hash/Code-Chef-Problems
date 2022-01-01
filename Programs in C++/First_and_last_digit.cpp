#include <iostream>
using namespace std;
int main()
{
    int t, n, sum;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        sum = 0;
        sum += n % 10;
        while (n >= 10)
        {
            n = n / 10;
        }
        sum += n;
        cout << sum << endl;
    }
    return 0;
}