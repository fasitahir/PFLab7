#include<iostream>
using namespace std;

int FrequencyCheck(int number , int digit);

int main()
{
   int number , digit;

   cout << "Enter Number: ";
   cin >> number;

   cout<<"Enter single Digit: ";
   cin>> digit;

   cout << FrequencyCheck(number ,digit);

}

int FrequencyCheck(int number , int digit)
{
    int count = 0;
    int result;

    while(number > 0)
    {

        result = number%10;          
        number  = number / 10;       
        if(result == digit)
        {
            count = count + 1;
        }
 
    }
    return count;

}