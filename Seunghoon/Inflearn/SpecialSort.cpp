#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// 35. Special Sort (���� ���ͺ�)
// ���� ������ ���ʿ� ���������� ���ʿ� �־���Ѵ�. ���� ���� ������ ���� ������ �������� ������ ����� �Ѵ�
// �Է� �� : ���� ���� n , ��� ����Ʈ postiveList, ���� ����Ʈ negativeList
// ��� �� : ���� ����, ���� ���� ����

int main()
{
	int n;
	cin >> n;
	vector<int> positiveList;
	vector<int> negativeList;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;

		if (num > 0) positiveList.push_back(num);
		else negativeList.push_back(num);
	}

	vector<int> numList;
	
	for (auto i : negativeList) numList.push_back(i);
	for (auto i : positiveList) numList.push_back(i);


	for (int i = 0; i < numList.size(); i++)
	{
		cout << numList[i] << " ";
	}

	return 0;
}