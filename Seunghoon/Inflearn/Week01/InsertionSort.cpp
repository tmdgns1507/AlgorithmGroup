#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

 36. ��������
 �������ķ� ���� ����Ʈ�� ������������ �����Ͻÿ�.
 �Է� �� : ���� ���� n , ���� ����Ʈ numList
 ��� �� : �������� ���ĵ� ����Ʈ

int main()
{
	int n;
	cin >> n;
	vector<int> numList(n);
	

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		numList[i] = num;
	}

	for (int i = 0; i < n - 1; i++)
	{
		for (int curr = i + 1; curr > 0; curr--)
		{
			int prev = curr - 1;
			if (numList[curr] < numList[prev]) swap(numList[curr], numList[prev]);
			else break;
		}
	}
	

	for (int i = 0; i < n; i++)
	{
		cout << numList[i] << " ";
	}


	return 0;
}