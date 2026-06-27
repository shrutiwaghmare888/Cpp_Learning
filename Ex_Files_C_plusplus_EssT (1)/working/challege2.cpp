#include <iostream>
using namespace std;

int main()
{
    int count = 0;

    for (int i = 2; i <= 100; i++)
    {
        bool prime = true;

        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }

        if (prime)
        {
            cout << i << " is Prime" << endl;
            count++;

            if (count == 25)
            {
                break;
            }
        }
    }

    return 0;
}