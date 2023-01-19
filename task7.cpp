#include <iostream>
using namespace std;

void calculatePercentage(int number);

int main()
{
    int amountOfNumbers;

    cout << "Enter number of numbers you want to enter: ";
    cin >> amountOfNumbers;

    calculatePercentage(amountOfNumbers);
}

void calculatePercentage(int amountOfNumbers)
{
    float numbers, p1, p2, p3, p4, p5;

    float counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0, counter5 = 0;
    

    for (int count = 1; count <= amountOfNumbers; count++)
    {
        cout << "Enter Number " << count << " :";
        cin >> numbers;

        if (numbers < 200)
        {
            counter1 = counter1 + 1;

            counter1;
        }

        else if (numbers >= 200 && numbers < 400)
        {
            counter2 = counter2 + 1;
            p2 = counter2;
        }

        else if (numbers >= 400 && numbers < 600)
        {
            counter3 = counter3 + 1;
            p3 = counter3;
        }

        else if (numbers >= 600 && numbers < 800)
        {
            counter4 = counter4 + 1;
            p4 = counter4;
        }

        else if (numbers >= 800)
        {
            counter5 = counter5 + 1;
            p5 = counter5;
        }
    
    p1 = (counter1 / count) * 100;
    p2 = (counter2 / count)* 100;
    p3 = (counter3 / count)* 100;
    p4 = (counter4 / count)* 100;
    p5 = (counter5 / count)* 100;

    }
    cout << "P1: " << p1  <<" %"<< endl << "P2: " << p2  <<" %"<<endl <<  "P3: " << p3  <<" %"<< endl << "P4: " << p4  <<" %"<<endl << "P5: " << p5 <<" %"<< endl; 

}