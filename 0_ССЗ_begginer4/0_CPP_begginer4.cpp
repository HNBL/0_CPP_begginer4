#include <iostream>
using namespace std;

//уравнение вложеными условными операторами 

int main()
{

	system("chcp 1251>nul");
	float A, B;
	float x;
	
	cout << "Решите уравнение: " << "Ax = B" << endl;


	do
	{

		cout << "введите значения числа А    " << endl;
		cin >> A;
		cout << "введите значения числа В   " << endl;
		cin >> B;
		if (A == 0) {

			cout << "Уравнение некооректно, введите число заново " << endl;

			
		}
		else
		{


			x = B / A;
			cout << " Решение уровнения: x = " << x << endl;
		}

	} while (A == 0);
	
	



		system("pause>nul");
		return 0;

}



