#include <iostream>
using namespace std;
int main()
{
    int luckyNumber = 5 , number = 0 ;

        cout<<"Enter Your Number: ";
        cin>> number;
    while(number != luckyNumber)
    {
        cout<<"This is not the number! Try again!"<<endl;
        cout<<"Enter Your Number: ";
        cin>> number;
    }
    return 0;
}