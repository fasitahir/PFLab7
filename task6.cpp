#include <iostream>
using namespace std;
int calculateGCD(int number1, int number2);
int calculateLCM(int number1, int number2 , int gcd);

main()
{
    int number1, number2;
    cout << "Enter First Number: ";
    cin >> number1;

    cout << "Enter Second Number: ";
    cin >> number2;

    int gcd =calculateGCD(number1, number2);

    int lcm = calculateLCM(number1, number2 , gcd);

    cout << "HCF : "<< gcd<<endl << "LCM: "<<lcm << endl;
}

int calculateGCD(int number1, int number2)
{
    int remainder , remainder2;
    while (true)
    {
        if (number1 > number2)
        {
            remainder = number1 % number2;
            if (remainder == 0)
            {
                return number2;
            }
            else if (remainder != 0)
            {
                remainder2 = number2 % remainder;
                if (remainder2 == 0)
                {
                    return remainder;
                }
            }
        }

        else if (number2 > number1)
        {
            remainder = number2 % number1;
            if (remainder == 0)
            {
                return number1;
            }
            else if (remainder != 0)
            {
                remainder2 = number1 % remainder;
                if (remainder2 == 0)
                {
                    return remainder;
                }
            }
        }
    }
}



int calculateLCM(int number1, int number2 , int gcd)
{
    int LCM;
    LCM = (number1*number2)/gcd ;
    return LCM; 
}
