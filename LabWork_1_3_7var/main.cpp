#include <iostream>
#include <bitset>
#include <cmath>

using namespace std;

int main()
{
	setlocale(0, "");
	int x;
	int y;
	short i;
	cout << "������� ����� x (�� 0 �� 10^9): ";
	cin >> x;
	if (x < 0 || x > pow(10, 9))
	{
		cout << "����� �� ����������� ��������� �������!";
		return 0;
	}
	cout << "������� ����� ���� i: ";
	cin >> i;
	short size_x = ceil(log2(x));
	y = x | (1 << (size_x - i));
	cout << "�������� 32 ��������� ������������� ��������� �����:" << '\t' 
	<< '\t' << bitset<32>(x) << endl;
	cout << "�������� 32 ��������� ������������� �����, � ���������� �����:  " << bitset<32>(y) << endl;
	cout << "�������� �����: " << x << endl;
	cout << "���������: " << y;
}