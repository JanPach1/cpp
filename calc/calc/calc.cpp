#include <iostream>
#include <fstream>
#include <windows.h>
using namespace std;

void savres(double result)
{
    fstream savresfile;
    savresfile.open("savresfile.txt", ios::out);
    if (savresfile.good() == true)
    {
        cout << "file access admited" << endl;
        savresfile << result;
        savresfile.close();
    }
    else
    {
        cout << "file access denied" << endl;
        savresfile.close();
    }
}

void add()
{
    double ingred1, ingred2, result;
    cout << "enter first ingrediend" << endl;
    cin >> ingred1;
    cout << "enter secound ingredient" << endl;
    cin >> ingred2;
    result = ingred1 + ingred2;
    cout << "result: " << result << endl;
    cout << "do you want to save changes? (0/1)" << endl;
    int a;
    cin >> a;
    switch (a)
    {
        case 0:
        {
            break;
        }break;

        case 1:
        {
            savres(result);
        }break;
    }
}

void sub()
{
    double ingred1, ingred2, result;
    cout << "enter first ingrediend" << endl;
    cin >> ingred1;
    cout << "enter secound ingredient" << endl;
    cin >> ingred2;
    result = ingred1 - ingred2;
    cout <<"result: "<< result << endl;
    cout << "do you want to save changes? (0/1)" << endl;
    int a;
    cin >> a;
    switch (a)
    {
    case 0:
    {
        break;
    }break;

    case 1:
    {
        savres(result);
    }break;
    }
}

void div()
{
    double ingred1, ingred2, result;
    cout << "enter first ingrediend" << endl;
    cin >> ingred1;
    cout << "enter secound ingredient" << endl;
    cin >> ingred2;
    if (ingred2 == 0)
    {
        cout << "trying to devide by 0, error" << endl;
    }
    else
    {
        result = ingred1 / ingred2;
        cout << "result: " << result << endl;
        cout << "do you want to save changes? (0/1)" << endl;
        int a;
        cin >> a;
        switch (a)
        {
        case 0:
        {
            break;
        }break;

        case 1:
        {
            savres(result);
        }break;
        }
    }
}

void mult()
{
    double ingred1, ingred2, result;
    cout << "enter first ingrediend" << endl;
    cin >> ingred1;
    cout << "enter secound ingredient" << endl;
    cin >> ingred2;
    result = ingred1 * ingred2;
    cout << "result: " << result << endl;
    cout << "do you want to save changes? (0/1)" << endl;
    int a;
    cin >> a;
    switch (a)
    {
    case 0:
    {
        break;
    }break;

    case 1:
    {
        savres(result);
    }break;
    }
}

int main()
{
    int sw;
    cout << "witch opertation do you want to do?" << endl;
    cout << "1: addition" << endl;
    cout << "2: substraction" << endl;
    cout << "3: multiplication" << endl;
    cout << "4: division" << endl;

    cin >> sw;

    switch (sw)
    {
        case 1:
        {
            add();
        }break;

        case 2:
        {
            sub();
        }break;

        case 3:
        {
            mult();
        }break;

        case 4:
        {
            div();
        }break;

        default:
        {
            cout << "this option is not available yet" << endl;
        }break;
    }
}