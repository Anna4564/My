#include <iostream>
#include <iomanip>
#include <Windows.h>
#include <fstream>
#include "Header.h"
using namespace std;

void file(double array[], int& size)
{   double masselem;
    ifstream fin; // ������� ����
    string file;
    cout << "������� ���! ������ ��'� ����� ��� ����, ��� ������� � ����� ����: ";
    cin >> file;
    fin.open(file); //�������� �����, fin -���������� ������� �������� �� ����
    if (!(fin.is_open()))
    {
        cout << "���� �� ��������! ";
    }
    else
    {
        while (fin >> masselem)
        {
            size++; //�������� ��� ������� , ����� 
        }
        fin.clear(); // ������� ���������  ��������� � ����� 
        fin.seekg(0, fin.beg); // ���������� ��������� � ������ �����
        cout << "����������� ������ �����:" << endl;
        for (int i = 0; i < size; i++)
        {
            fin >> masselem;
            array[i] = masselem;
            cout << array[i] << "   ";
        }
        cout << endl;
        fin.close(); // ���� ���������
    }
}
void task2(double array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (array[j] < array[j + 1])
            {
                swap(array[j], array[j + 1]);
            }
        }
    }
}
    void count(double array[], int size, double&good, double&bad, double&ss )
    {
        good = 0, bad = 0, ss = 0;
        for (int i = 0; i < size; i++)
        {
            if (array[i] > 0)
            {
                good++;
            }
            if (array[i] < 0)
            {
                bad++;  
            }
            if (array[i] == 0)
            {
                ss++;     
            }
        }
    }
   
    
   
