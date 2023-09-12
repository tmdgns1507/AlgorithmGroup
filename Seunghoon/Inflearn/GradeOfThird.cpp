#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// 33. 3���� ������?
// N���� ���м����� �־����� �� �� 3���� �� ���м����� ����ϴ� ���α׷�
// �Է� �� : ���� ���� n , ���� ����ƮrecordList
// ��� �� : 3���� ������ ���

int main()
{
	int n;
	cin >> n;
	vector<int> recordList(n);

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		recordList[i] = num;
	}

	//���̺귯�� ���
	sort(recordList.begin(), recordList.end(), greater<>());

	int rank = 0;
	for (int i = 1; i < n; i++)
	{
		int prev = i - 1;
		if (recordList[prev] != recordList[i])
		{			
			rank++;
			if (rank == 3) {
				cout << recordList[prev];
				break;
			}
		}
	}

	return 0;
}