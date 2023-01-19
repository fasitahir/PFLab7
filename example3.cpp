#include <iostream>
using namespace std;
int main()
{
    int sum = 0 ;
    for(int count= 2; count < 100; count++ )
    {
        sum = sum + count ;
    }
    cout<< sum;
    return 0;
}