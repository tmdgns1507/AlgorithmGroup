#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// Angry Person
// �г�������_ ���ķ� ���� �л��� �� �ڿ����� �л��� ��κ��� Ű ū ��� �� ã��
// �Է� �� n: �� �ٿ� �ɴ� �л� ��, heightList: ���� �л����� Ű
// ��� �� : �г������� ��


int main()
{
	int n, ret = 0;
	int* heightList;
	cin >> n;
	heightList = new int[n];

	for (int i = 0; i < n; i++)
	{
		int height;
		cin >> height;
		heightList[i] = height;
	}
	
	int maxValue = heightList[n - 1];

	for (int i = n - 1; i >= 0; i--)
	{
		if (heightList[i] > maxValue)
		{
			maxValue = heightList[i];
			ret++;
		}
	}

	cout << ret;

	return 0;
}