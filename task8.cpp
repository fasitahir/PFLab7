#include <iostream>
using namespace std;

float calculateMoney(int age, float machinePrice, float toyPrice);

int main()
{
    int age;
    float machinePrice, toyPrice;

    cout << "Enter Your Age: ";
    cin >> age;

    cout << "Enter Machine Price: ";
    cin >> machinePrice;

    cout << "Enter Price of Each Toy: ";
    cin >> toyPrice;

    float result = calculateMoney(age, machinePrice, toyPrice); // function call

    if(result >= 0) //this means total money was more than machine price
    {
        cout<< "Yes !"<<endl << result<< endl;
    }

    else if (result < 0 ) // this means total money is less than required
    {
        cout << "No !" << endl <<-1 * result << endl;
    }
}

// fucntion defination
float calculateMoney(int age, float machinePrice, float toyPrice)
{
    float evenMoney = 0, oddMoney = 0 , result;
    int evenCount = 0;
    int oddYearCount = 0;
    for (int count = 1; count <= age; count++)
    {
        if (count % 2 == 0)
        {

            evenCount = evenCount + 1;

            evenMoney = evenMoney + (evenCount * 10);
            evenMoney = evenMoney -1;
        }

        else if (count % 2 != 0)
        {
            oddYearCount++;

            oddMoney = oddYearCount * toyPrice;
        }
    }

    float totalMoney = evenMoney + oddMoney;

    return result = totalMoney - machinePrice;
}