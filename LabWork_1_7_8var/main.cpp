/*������� 8

���� ������������� ������� {Aij}i=1...n;j=1..n , n<=100.
���� ����� ���� ������������ � ������������� ��������� �������
���������� �� �����, ��� �� 2, ����������� ������� ������� �� ���������� ����� ���������. 
*/

#include "funcs.hpp"
#include <iostream>

int main()
{
    int matrix[N][N], n, sum_of_columns[N];
    Read(matrix, n);
    int sum_max_digits = sumOfDigits(maxMatrixElem(matrix, n));
    int sum_min_digits = sumOfDigits(minMatrixElem(matrix, n));
    if (std::abs(sum_max_digits - sum_min_digits) <= 2)
    {
        matrixSort(matrix, n);
    }
    Write(matrix, n);
}