#include <iostream>
using namespace std;

void printFibonacci(int uptonumber);

int main()
{
    int uptonumber;

    cout << "You want Fibonacci Series upto which number: ";
    cin >> uptonumber;

    printFibonacci(uptonumber);
    
}

void printFibonacci(int uptonumber)
{
    int number1=0  , number2=1;

    cout << number1 << " , " << number2 ;

    for (int count = 1 ; count <= uptonumber - 2 ; count++  ) //we subtracted 2 from upto number because we had already printed first two numbers outside the loop 
    {
        int result = number1 + number2;
        number1 = number2; 
        number2= result;

        cout<< " , " <<result;
    }

}