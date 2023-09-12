#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// 22. MaxValue Of Temperature
// �µ��� �ִ�
// �Է� �� : n�� ��ü ��¥�� ���� , k�� 1��n������ ������ ���� ���� ���� �������� ��¥�� ��, ��ĭ�� ���̿� �ΰ� n���� �µ�
// ��� �� : �ִ밪


int main()
{
	int n, k, max = -1;
	cin >> n >> k;
	vector<int> temperatureList(n);
	for(int i = 0; i < n; i++)
	{
		int temperature;
		cin >> temperature;
		temperatureList[i] = temperature;
	}

	//// 2�� for�� �ϱ� ������ TimeComplexity�ɸ�	
	//for (int i = 0; i < n - k; i++)
	//{
	//	int sum = 0;
	//	for (int j = i; j < i + k; j++)
	//	{			
	//		sum += temperatureList[j];
	//	}
	//	if (sum > max) max = sum;
	//}

	int sum = 0;
	for (int i = 0; i < k; i++)
	{
		sum += temperatureList[i];
	}
	max = sum;

	for (int i = k; i < n; i++)
	{
		int previous = i - k;
		sum += (temperatureList[i] - temperatureList[previous]);
		if (sum > max) max = sum;
	}

	cout << max;

	return 0;
}