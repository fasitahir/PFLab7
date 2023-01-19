#include <iostream>
using namespace std;
int main()
{
    for(int count= 1; count <= 100 ; count++ )
    {
        if(count%2 == 0 )
        {
         cout<< count <<  endl;
        }
    }
    return 0;
}

/*It can also be done by
for(int count= 2; count <= 100 ; count +=2 )*/