#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void DecimalToBinary(int a)
{
    int bit;
    float ans = 0;
    int i = 0;
    while (a > 0)
    {
        int bit = a % 2;
        ans = (bit * pow(10, i) + ans);
        a = a / 2;
        i++;
    }
    cout << ans;
}
int main()
{
    int n;
    cout << "enter A number";
    cin >> n;
    DecimalToBinary(n);
    return 0;
}