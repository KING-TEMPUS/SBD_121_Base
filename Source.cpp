#include<iostream>
#include<conio.h>
using namespace std;

//#define HOME_1
//#define HOME_2
//#define HOME_3
void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef HOME_1

	int a, b, result;
	char g;
	cout << "������� ������ �����: "; cin >> a;
	cout << "������� ��������: "; cin >> g;
	cout << "������� ������ �����: "; cin >> b;
	if (g == '+')
	{
		result = a + b;
		cout << "�����: " << result << endl;
	}
	else if (g == '-')
	{
		result = a - b;
		cout << "�����: " << result << endl;
	}
	else if (g == '*')
	{
		result = a * b;
		cout << "�����: " << result << endl;
	}
	else if (g == '/')
	{
		result = a / b;
		cout << "�����: " << result << endl;
	}
#endif

#ifdef HOME_2
	int number, number_agent, p = 0;

	cout << "������� �����: "; cin >> number;
	number_agent = number;

	while (number)
	{
		p = p * 10 + number % 10;
		number /= 10;
	}
	
	if ( number_agent == p )
	{
		cout << "���� ����� ���������" << endl;
	}
	else
	{
		cout << "���� ����� �� ���������" << endl;
	}
#endif
	
#ifdef HOME_3 
	char key;

	do
	{
		key = _getch();
		if ( (int)key == 119)
		{
			cout << "�����" << endl;
		}
		else if ( (int)key == 97)
		{
			cout << "�����" << endl;
		}
		else if ( (int)key == 100)
		{
			cout << "������" << endl;
		}
		else if ( (int)key == 115)
		{
			cout << "����" << endl;
		}
		else if ( (int)key == 32)
		{
			cout << "������" << endl;
		}
		else if ( (int)key == 13)
		{
			cout << "��������" << endl;
		}
		
	} while (true);
#endif
}
