#include <iostream>
using namespace std;

int sum(int number);

int main()
{
    int number;

    cout << "Enter Number: ";
    cin >> number;

    cout << sum(number);
}

int sum(int number)
{
    int remainder, sum = 0;
    while (number > 0)
    {
        if (number != 0)
        {
            remainder = number % 10;

            number = number / 10;

            sum = remainder + sum;
        }
    }
    return sum;
}