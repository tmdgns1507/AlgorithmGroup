#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// Rock-Paper-Scissors
// ����������
// �Է� �� n: ���������� ���� Ƚ��, A�� �� ����, B�� �� ����
// 1:���� / 2:���� / 3:��
// ��� �� : ���� ���(A,B ����� D)


int* SetRCPArray(int n)
{
	int* ret = new int[n];
	for (int i = 0; i < n; i++)
	{
		int rcp;
		cin >> rcp;
		ret[i] = rcp;
	}

	return ret;
}

char GetWinner(int userA, int userB)
{
	if (userA == userB) return 'D';
	else if (userA == 1 && userB == 3) return 'A';
	else if (userA == 2 && userB == 1) return 'A';
	else if (userA == 3 && userB == 2) return 'A';
	else return 'B';
}

int main()
{
	int n;
	cin >> n;
	int* aList = new int[n];
	int* bList = new int[n];

	aList = SetRCPArray(n);
	bList = SetRCPArray(n);

	for (int i = 0; i < n; i++)
	{
		char ret = GetWinner(aList[i], bList[i]);
		cout << ret << endl;
	}

	return 0;
}