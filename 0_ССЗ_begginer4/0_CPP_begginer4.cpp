#include <iostream>
using namespace std;

//��������� ��������� ��������� ����������� 

int main()
{

	system("chcp 1251>nul");
	float A, B;
	float x;
	
	cout << "������ ���������: " << "Ax = B" << endl;


	do
	{

		cout << "������� �������� ����� �    " << endl;
		cin >> A;
		cout << "������� �������� ����� �   " << endl;
		cin >> B;
		if (A == 0) {

			cout << "��������� �����������, ������� ����� ������ " << endl;

			
		}
		else
		{


			x = B / A;
			cout << " ������� ���������: x = " << x << endl;
		}

	} while (A == 0);
	
	



		system("pause>nul");
		return 0;

}



