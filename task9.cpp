#include <iostream>
using namespace std;

float calculatePrice(float money, int year);

main()
{
    float money, result;
    int year;

    cout << "Enter Money you got inherited: ";
    cin >> money;

    cout << "Enter Year until which you want to live: ";
    cin >> year;

    result = calculatePrice(money, year);

    if (result >= 0) // money was enought for survival
    {
        cout << "Yes! He will live carefree life and will have " << result << " dollar left.";
    }

    else if (result < 0) // this mean that he dont have enogh money
    {
        cout << "He will need " << -1 * result << " dollars to survive.";
    }
}

float calculatePrice(float money, int year)
{

    int yearsLived;
    float moneyLeft = money;

    yearsLived = year - 1800;

    for (int count = 0; count <= yearsLived; count++)
    {
        if (count % 2 == 0)
        {
            moneyLeft = moneyLeft - 12000;
        }

        else if (count % 2 != 0)
        {

            moneyLeft = (moneyLeft) - (12000+50*(count+18));
        }
    }

    return moneyLeft;
}