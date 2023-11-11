#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    cout << "enter the number: ";
    cin >> num;

    if ((num % 2 == 0) && (num >= 0))
    {
        cout << "number: " << num
             << " is even" << endl;
    }
    else
    {
        cout << "number: " << num
             << " is odd" << endl;
    }
    return 0;
}