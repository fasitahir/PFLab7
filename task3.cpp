#include<iostream>
using namespace std;

int totaldigit(int number);

int main()
{
   int number , result;

   cout << "Enter Number: ";
   cin >> number;

   cout << totaldigit(number);

    
    return 0;
}

int totaldigit(int number)
{
    int count = 0;

    while(number > 0)
    {

        number  = number / 10;
        count = count + 1;
    }
    return count;

}