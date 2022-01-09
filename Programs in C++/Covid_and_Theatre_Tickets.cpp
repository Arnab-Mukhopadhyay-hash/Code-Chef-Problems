#include <iostream>
using namespace std;
int main()
{
    int t, r, s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> r >> s;
        int sell = 0;
        for (int j = 1; j <= r; j++)
        {
            for (int k = 1; k <= s; k++)
            {
                if ((j % 2 == 0) || (k % 2 == 0))
                {
                    continue;
                }
                else
                {
                    sell++;
                }
            }
        }
        cout << sell << endl;
    }
    return 0;
}