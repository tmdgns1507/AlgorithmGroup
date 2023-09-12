#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// 27. N Factorial
// N!�� �̿��ؼ� �Է°� n�� �־����� 2, 3 ,5 , 7 , 11 �� ���� �Ҽ����� ������ ���
// �Է� �� : n�� ���� ��
// ��� �� : �Ҽ����� ���� (2, 3, 5 ,7, 11) 

map<int, int> primeNumMap;

void SetPrimeNumMap(int num)
{
	bool hasPrimeNumber = false;
	for (auto primePair : primeNumMap)
	{
		if (primePair.first == num)
		{
			hasPrimeNumber = true;
			primeNumMap[primePair.first]++;
			break;
		}
	}
	if (hasPrimeNumber == false) primeNumMap.insert({ num, 1 });
}

int main()
{
	int n;
	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		int tmp = i;
		int j = 2;
		while (tmp != 1)
		{
			if (tmp % j == 0)
			{
				tmp /= j;
				SetPrimeNumMap(j);
			}
			else
			{
				j++;
			}
		}
	}

	cout << n << "! = ";
	for (auto primePair : primeNumMap)
	{
		cout << primePair.second << " ";
	}
	

	return 0;
}

// �����ٽ�
// 38 ~ 54 ���� :  �Ҽ��� �̾Ƽ� map�� �����ϴ°�