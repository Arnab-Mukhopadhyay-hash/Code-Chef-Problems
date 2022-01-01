#include <iostream>
using namespace std;
int main()
{
    int n, k, d = 0;
    unsigned long int t;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t % k == 0)
        {
            d++;
        }
        else
        {
            continue;
        }
    }
    cout << d << endl;
    return 0;
}