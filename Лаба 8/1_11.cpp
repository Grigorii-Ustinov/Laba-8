/*11.	� ���������� �������� ������ ��������, �������������� ����� ��������� ������� ������������� ������������,
� ����� ����� ��������������� ����� k. � ������ ����� ������ ������� k-�� ����� � ������� ������������ �� �����.*/

#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)

using namespace std;

const int STR_SIZE = 256;

int number1_11()
{
    char defaultString[STR_SIZE]{ 0 };
    char finalString[STR_SIZE]{ 0 };
    int k;
    cout << "Enter string: ";
    cin.getline(defaultString, STR_SIZE);
    cout << "Enter number: ";
    cin >> k;
    int i = 0;
    while (defaultString[i] != '\0')
    {
        int m = 1;
        while (defaultString[i] != ' ' && defaultString[i] != '\0')
        {
            if (m != k)
            {
                char symbol[2];
                symbol[0] = defaultString[i];
                symbol[1] = '\0';
                strcat(finalString, symbol);
            }
            ++m;
            ++i;
        }
        char symbol[2];
        symbol[0] = ' ';
        symbol[1] = '\0';
        strcat(finalString, symbol);
        ++i;
    }
    cout << finalString << endl;
    return 0;
}
