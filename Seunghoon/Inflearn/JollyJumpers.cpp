#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// 24. Jolly Jumpers
// ������ ���� (���� ������ �ִ� �� ���� ���� 1���� n-1���� ���� ��� ���� ���)
// �Է� �� : n�� ������ ����, ���� numList
// ��� �� : ������ ���۸� YES���, �ƴϸ� NO���


int main()
{
	int n;
	cin >> n;
	vector<int> numList(n);
	vector<int> jollyJumpers;	
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		numList[i] = num;
	}

	
	for (int i = 0; i < n-1; i++)
	{
		int next = i + 1;
		int value = abs(numList[i] - numList[next]);
		jollyJumpers.push_back(value);
	}
	
	sort(jollyJumpers.begin(), jollyJumpers.end());

	for (int i = 0; i < n-1; i++)
	{
		if (jollyJumpers[i] != i + 1)
		{
			cout << "NO";
			return 0;
		}
	}

	cout << "YES";

	return 0;
}