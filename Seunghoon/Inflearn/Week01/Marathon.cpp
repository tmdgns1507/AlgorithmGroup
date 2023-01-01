#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// 26. Marathon
// ������(�־��� �Է� �� ������� �� ���� �޸��� �����̸� �������� �ɷ�ġ, �տ� �ִ� �������� �ɷ�ġ�� ������ ������� ���� )
// �Է� �� : n�� ������ ���� ������ ��, ������ ���� �ɷ¸���Ʈ statsList
// ��� �� : �ּ��� ������� ���


int main()
{
	int n;
	cin >> n;
	vector<int> statsList(n);
	vector<int> hightestRankList(n);

	for (int i = 0; i < n; i++)
	{
		int stats;
		cin >> stats;
		statsList[i] = stats;
	}
	
	for (int i = n - 1; i >= 0; i--)
	{
		int curStats = statsList[i];
		int hightestRank = i + 1;

		for (int j = i; j >= 0; j--)
		{
			if (statsList[j] < curStats) hightestRank--;
		}

		hightestRankList[i] = hightestRank;
	}

	for (int i = 0; i < n; i++)
	{
		cout << hightestRankList[i] << " ";
	}

	return 0;
}