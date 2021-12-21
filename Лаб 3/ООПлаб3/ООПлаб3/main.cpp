#include <iostream>
#include <iomanip>
#include <string>
#include "business_trip.h"

using namespace std;

void Table();

int main()
{
    int i = 0;
    int q;
    std::string valueName, valueSurname;
    int valueDuration, valueAmount;
    business_trip member[2];
    int* array;
    //Зациклене меню для об'єктів:
    while (i < 2)
    {
        cout << "Member " << i + 1 << ":\n";
        cout << "Enter name:\n";
        cin >> valueName;
        cout << "Enter surname:\n";
        cin >> valueSurname;
        cout << "Enter duration (minimal amount of days - 2):\n";
        cin >> valueDuration;
        while (valueDuration < 2)
        {
            cout << "Enter duration (minimal amount of days - 2):\n";
            cin >> valueDuration;
        }
        cout << "Enter amount of money (minimal amount of money - 11000):\n";
        cin >> valueAmount;
        std::cout << "Fill the array: \n";
        array = new int[member[i].GetQuantity()];
        for (int j = 0; j < member[i].GetQuantity(); j++)
        {//заповнення масиву
            cin >> array[j];
        }
        if (valueAmount > 11000)
        {
            member[i].SetName(valueName);
            member[i].SetSurname(valueSurname);
            member[i].SetDuration(valueDuration);
            member[i].SetAmount(valueAmount);
            member[i].SetArray(array);
        }
        else
        {
            std::cout << "The constructor of copying was called.\n";
            business_trip newMember(member[i]);
            // после того, как создастся этот обьект, он сразу же удалится,
                          // т.к. обьект уйдет из зоны видимости(завершается выполнение кода else{}
        }
        cout << "0 - continue\n1 - change name\n2 - change surname\n3 - change duration\n4 - change amount of money\nanother number - exit\n";
        cin >> q;

        if (q == 1)
        {
            cout << "Enter name:\n";
            cin >> valueName;
            member[i].SetName(valueName);
        }
        else if (q == 2)
        {
            cout << "Enter surname:\n";
            cin >> valueSurname;
            member[i].SetSurname(valueSurname);
        }
        else if (q == 3)
        {
            cout << "Enter duration (minimal amount of days - 2):\n";
            cin >> valueDuration;
            member[i].SetDuration(valueDuration);
        }
        else if (q == 4)
        {
            cout << "Enter amount of money (minimal amount of money - 11000):\n";
            cin >> valueAmount;
            member[i].SetAmount(valueAmount);
        }
        else if (q != 0)
        {
            return 0;
        }
        i++;
    }
    i = 0;
    Table();
    while (i < 2)
    {
        member[i].Print();
        //cout << member[i].GetArray();
        i++;
    }
    delete[] array;
    return 0;
}

void Table()
{
    std::cout << "\nTable:\nName:\tSurname:\tDuration:\tAmount:\tPoints:\n";
}