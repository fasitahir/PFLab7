#include <iostream>
using namespace std;

void printTable(int number);
int main()
{
    int number ;
    cout<<"Enter Number : ";
    cin >> number;

    printTable(number);

    return 0;
}

void printTable(int number)
{
    for(int count= 1; count <= 10; count++ )
    {
        int multiplication = number * count;
        cout << number <<" * " << count << " = " << multiplication << endl;
    }

}