#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	int A, B, C;
	cout << "������� �������� ������ A, B, C (�� 0 �� 3*10^4): ";
	cin >> A >> B >> C;
	if (A <= 0 || A > 3 * pow(10, 4))
	{
		cout << "�������� A ������� �� ����� ����������!";
		return 0;
	}
	else 
	{
		if (B <= 0 || B > 3 * pow(10, 4))
		{
			cout << "�������� B ������� �� ����� ����������!";
			return 0;
		}
		else
		{
			if (C <= 0 || C > 3 * pow(10, 4))
			{
				cout << "�������� C ������� �� ����� ����������!";
				return 0;
			}
		}
	}
	cout << "�������� ������� ���������: " << sqrt(A * A + B * B + C * C);
}