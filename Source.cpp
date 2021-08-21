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
	cout << "Введите первое число: "; cin >> a;
	cout << "Введите оператор: "; cin >> g;
	cout << "Введите второе число: "; cin >> b;
	if (g == '+')
	{
		result = a + b;
		cout << "Ответ: " << result << endl;
	}
	else if (g == '-')
	{
		result = a - b;
		cout << "Ответ: " << result << endl;
	}
	else if (g == '*')
	{
		result = a * b;
		cout << "Ответ: " << result << endl;
	}
	else if (g == '/')
	{
		result = a / b;
		cout << "Ответ: " << result << endl;
	}
#endif

#ifdef HOME_2
	int number, number_agent, p = 0;

	cout << "Введите число: "; cin >> number;
	number_agent = number;

	while (number)
	{
		p = p * 10 + number % 10;
		number /= 10;
	}
	
	if ( number_agent == p )
	{
		cout << "Ваше число палиндром" << endl;
	}
	else
	{
		cout << "Ваше число не палиндром" << endl;
	}
#endif
	
#ifdef HOME_3 
	char key;

	do
	{
		key = _getch();
		if ( (int)key == 119)
		{
			cout << "Вперёд" << endl;
		}
		else if ( (int)key == 97)
		{
			cout << "Влево" << endl;
		}
		else if ( (int)key == 100)
		{
			cout << "Вправо" << endl;
		}
		else if ( (int)key == 115)
		{
			cout << "Вниз" << endl;
		}
		else if ( (int)key == 32)
		{
			cout << "Прыжок" << endl;
		}
		else if ( (int)key == 13)
		{
			cout << "Стрелять" << endl;
		}
		
	} while (true);
#endif
}
