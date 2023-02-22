#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <fstream>
#include "Header.h"
using namespace std;

int main(int argc, char* argv[]) 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double good, bad, ss;
    bool args = true;
    if (argc == 2)
    {
        args = false;
    }
    else
    {
        ofstream out; 
        double* mass = new double[argc];
        cout << "Послідовність дійсних чисел:" << endl;             //argv[0] – власне ім’я програми.
        for (int i = 2; i < argc; i++)
        {
            cout << atof(argv[i]) << "   ";
        }
        cout << endl;
        for (int i = 0, j = 2; i < argc - 2; i++, j++) //i - индекс массива который мы создали, поэтому = 0, 
        {
            mass[i] = atof(argv[j]);
        }
        cout << "Результати виконання завдання #2" << endl;
        task2(mass, argc -2);
        for (int i = 0; i < argc - 2; i++)
        {
            cout << "   " << mass[i];
        }
        cout << endl;
        cout << "Результати виконання завдання #3" << endl;
        count(mass, argc - 2, good, bad, ss);
        cout << "Хороші: " << good << endl;
        cout << "Погані: " << bad << endl;
        cout << "Ніякі: " << ss << endl;
        out.open(argv[1]);//запись в файл !!!
        out << "Результати виконання завдання #2" << endl;
        for (int i = 0; i < argc - 2; i++)
        {
            out << "   " << mass[i];
        } 
        out << endl;
        out << "Результати виконання завдання #3" << endl;
        out << "Хороші: " << good << endl;
        out << "Погані: " << bad << endl;
        out << "Ніякі: " << ss << endl;
        out.close();
    }
    if (args == false)
    {
        ofstream out;
        int size = 0; //размерность массива 
        double* mass = new double[size]; //динамический массив
        file(mass, size);
        cout << "Результати виконання завдання #2" << endl;
        task2(mass, size);
        for (int i = 0; i < size; i++)
        {
            cout << " " << mass[i];
        }
        cout << endl;
        cout << "Результати виконання завдання #3" << endl;
        count(mass, size, good, bad, ss);
        cout << "Хороші: " << good <<endl;
        cout << "Погані: " << bad << endl;
        cout << "Ніякі: " << ss << endl;
        out.open(argv[1]);//запись в файл !!!
        out << "Результати виконання завдання #3" << endl;
        for (int i = 0; i < size; i++)
        {
            out << " " << mass[i];
        }
        out << endl;
        out << "Результати виконання завдання #3" << endl;
        out << "Хороші: " << good << endl;
        out << "Погані: " << bad << endl;
        out << "Ніякі: " << ss << endl;
        out.close();
    }
    

}

