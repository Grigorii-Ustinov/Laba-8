#include <iostream>
#include <cstring>
#pragma warning(disable : 4996)

using namespace std;

/*const int STR_SIZE = 256;*/

int number2()
{
	char* defaultString = new char[255];
	char* oddString = new char[255];
	char* evenString = new char[255];
	/*char *oddString[255]{ 0 };//нечетный
	char *evenString[255]{ 0 };//четный*/

	char* space = new char[];
	space[0] = ' ';
	space[1] = '\0';

	cout << "Enter string: ";
	cin.getline(defaultString, 255);

	int n_words = 1;
	for (int i = 0; i < strlen(defaultString); i++)
	{
		int index = i;
		if (n_words % 2 != 0)
		{
			char* bufferString = new char[255];
			for (int j = 0; defaultString[index] != ' ' && defaultString[index] != '\0'; j++)
			{
				bufferString[j] = defaultString[index];
				index++;
			}
			strncat_s(oddString, 255, bufferString, 255);
			strncat_s(oddString, 255, space, 1);
			n_words++;
			i = index;
			delete[] bufferString;
		}
		else
		{
			char* bufferString = new char[255];
			for (int j = 0; defaultString[index] != ' ' && defaultString[index] != '\0'; j++)
			{
				bufferString[j] = defaultString[index];
				index++;
			}
			strncat_s(evenString, 255, bufferString, strlen(bufferString));
			strncat_s(evenString, 255, space, 1);
			n_words++;
			i = index;
			delete[] bufferString;
		}
	}
	cout << oddString << "\n" << oddString << evenString;
	return 0;
}