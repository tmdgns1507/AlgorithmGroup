#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// 28. zero Factorial
// ���丮���� ������ 1�� �ڸ����� ���������� 0�� �� �� �ִ��� ���ϴ� ���α׷�
// �Է� �� : n�� ���� ��
// ��� �� : 1�� �ڸ����� ���ӵ� 0�� ����


int main()
{
	// 2*5 = 10 �̱� ������ 10^n 
	// 2,5�� ���� �� �ּҰ��� ����

	int n;
	cin >> n;
	int num2 = 0;
	int num5 = 0;

	for (int i = 2; i <= n; i++)
	{
		int tmp = i;
		int j = 2;
		while (j <= tmp)
		{
			if (tmp % j == 0)
			{
				switch (j)
				{
				case 2:
					num2++;
					break;
				case 5:
					num5++;
					break;
				default:
					break;
				}

				tmp /= j;
			}
			else j++;
		}
	}

	cout << min(num2, num5);

	return 0;
}