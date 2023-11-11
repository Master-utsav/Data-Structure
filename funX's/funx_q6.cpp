#include <iostream>
#include <string>

using namespace std;

int main()
{

    int num;
    int i = 2;

    cout << "enter the number: ";
    cin >> num;

    if (num >= 0)
    {
        if (num == 1)
        {
            cout << " " << num << " is a prime number" << endl;
        }
        else if (num == 0)
        {
            cout << " " << num << " is a non-prime number" << endl;
        }
        else
        {
            if (i < num)
            {
                int z;
                while (num % i != 0)
                {
                    z = i;
                    i++;

                    if (i == num)
                    {
                        cout << " " << num << " is a prime number" << endl;
                    }
                }
                cout<<"smallest number which divides: "<<num<<" is "<<i<<endl;
                if ((num % z != 0) && (num != z+1))
                {
                    cout << " " << num << " is a non-prime number" << endl;
                }
            }
        }
    }
    else
    {
        cout << " " << num << " is a negative number" << endl;
    }
    return 0;
}