#include <iostream>

using namespace std;

int main()
{
	//1
	setlocale(0, "");
	int A, B, C;
	cout << "1) ������� ����������� ����� A, B, C: ";
	cin >> A >> B >> C;
	if (A % B == 0)
	{
		if (B > C)
			cout << "���������: " << A / B + C;
		else
		{
			if (B < C)
				cout << "���������: " << A / B - C;
		}
	}
	else
		cout << "���������: " << (A + B) * C;
    //2
    cout << endl << endl;
    int N;
    string result2;
    bool flag2 = true;
    cout << "2) ������� ����������� ����� N: ";
    cin >> N;
    switch (N)
    {
        case 1:
            result2 = "�����������";
            break;
        case 2:
            result2 = "�������";
            break;
        case 3:
            result2 = "�����";
            break;
        case 4:
            result2 = "�������";
            break;
        case 5:
            result2 = "�������";
            break;
        case 6:
            result2 = "�������";
            break;
        case 7:
            result2 = "�����������";
            break;
        default:
            result2 = "�������� �������� N �� ����� ���� ������� ��� ������!";
    }
    cout << result2 << endl << endl;
    //3
    int x;
    string result3;
    cout << "3) ������� ����� 1 ��� -1: ";
    cin >> x;
    switch (x)
    {
        case -1:
            result3 = "Negative number";
            break;
        case 1:
            result3 = "Positive number";
            break;
        default:
            result3 = "������� ������������ ��������!";
    }
    cout << result3;
}