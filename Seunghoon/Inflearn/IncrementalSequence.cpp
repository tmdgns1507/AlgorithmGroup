#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// 23. Incremental Sequence
// �������� ��������
// �Է� �� : n�� �ڿ����� ����, ���ڿ� numList
// ��� �� : �ִ� �κ� ���������� ����


int main()
{
	int n, max = -1;
	cin >> n;
	vector<int> numList(n);
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		numList[i] = num;
	}

	int cnt = 1;
	for (int i = 0; i < n-1; i++)
	{
		int next = i + 1;

		int prev = numList[i];
		int curr = numList[next];
		if (prev <= curr)
		{
			cnt++;
			if (max < cnt) max = cnt;
		}
		else
		{
			cnt = 1;
		}		
	}

	cout << max;

	return 0;
}