#include <iostream>
using namespace std;
int main()
{
    int t, a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        int mini = max(a, b);
        int maxi = a + b;
        cout << mini << " " << maxi << endl;
    }
    return 0;
}