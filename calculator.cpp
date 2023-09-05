#include <iostream>
using namespace std;

class Calculate
{
    float number;

public:
    Calculate()
    {
        number = 0.00;
    }
    Calculate(float n)
    {
        number = n;
    }

    float getNumber()
    {
        return number;
    }
    void setNumber(float n)
    {
        number = n;
    }

    Calculate operator+(Calculate &obj)
    {
        Calculate newObj(number + obj.getNumber());
        return newObj;
    }
    Calculate operator-(Calculate &obj)
    {
        Calculate newObj(number - obj.getNumber());
        return newObj;
    }
    Calculate operator*(Calculate &obj)
    {
        Calculate newObj(number * obj.getNumber());
        return newObj;
    }
    Calculate operator/(Calculate &obj)
    {
        Calculate newObj(number / obj.getNumber());
        return newObj;
    }
};

int main()
{
    cout << "Welcome To The Calculator\n";
    int key;
    do
    {
        Calculate Num[10];
        cout << "Enter the numbers to Calculate:\nEnter '-1' to continue\n ";
        float x;
        int i = 0, max;
        while (x != -1)
        {
            cin >> x;
            if (x != -1)
            {
                Num[i].setNumber(x);
                cout << "\nThe number is registered\n";
                max = i;
            }
            i++;
        }
        i = 0;
        cout << "What Operation do you want to perform:\n1: +\n2: -\n3: *\n4: /\n\n";
        cin >> key;
        switch (key)
        {
        case 1:
            for (i=0; i < max; i++)
            {
                Num[i+1] = Num[i] + Num[i + 1];
            }
            break;
        case 2:
            for (i=0; i < max; i++)
            {
                Num[i+1] = Num[i] - Num[i + 1];
            }
            break;
        case 3:
            for (i=0; i < max; i++)
            {
                Num[i+1] = Num[i] * Num[i + 1];
            }
            break;
        case 4:
            for (i=0; i < max; i++)
            {
                Num[i+1] = Num[i] / Num[i + 1];
            }
            break;
        case 0:
            return 0;
        default:
            break;
        }
        cout << "Result is " << Num[max].getNumber();
    } while (0);
    return 0;
}