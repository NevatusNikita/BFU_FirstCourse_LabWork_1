#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
	//1
    int j;
    int x;
    int min_x = INT32_MAX;
    int min_ind = -1;
    int sum_of_els = 0;
    bool flag = false;
    cout << "1) ������� ���������� ��������� ������������������ j: ";
    cin >> j;
    cout << "������� �������� ��������� ������������������: ";
    for (int i = 0; i < j; ++i)
    {
        cin >> x;
        if ((x % 3 == 0) || (x % 7 == 0))
        {
            flag = true;
            sum_of_els += x;
            if (x < min_x)
            {
                min_x = x;
                min_ind = i + 1;
            }
        }
    }
    if (flag)
    {
        cout << "����� ���������, ��������� �� 3 ��� �� 7: " << sum_of_els << endl;
        cout << "����������� ������� ������������������, ��������� �� 3 ��� �� 7: " << min_x << endl;
        cout << "����� ������������ ��������, ���������� �� 3 ��� �� 7, � ������������������: " << min_ind << endl << endl;
    }
    else
        cout << "�����, ��������������� �������, ��� � ������������������" << endl << endl;
    //2
    int p = 1;
    int N;
    int numeral;
    cout << "2) ������� ����������� ����� N: ";
    cin >> N;
    while (N != 0)
    {
        numeral = N % 10;
        if (numeral % 2 == 0)
            p *= numeral;
        N /= 10;
    }
    cout << "������������ ������ ���� �����: " << p;
}