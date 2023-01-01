#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// CardGame
// ī�����
// �Է� �� : 0~9���� ������ ���� �� ��(A,B)
// ��� �� : �հ谡 �̱� ��� A,B ���� D

int* aCards;
int* bCards;

int* InputCardArray()
{
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		int num;
		cin >> num;
		arr[i] = num;
	}
	return arr;
}

int GetPoint(int a, int b)
{
	// �¸�:3��, ����:1��
	if (a == b) return 1;
	else if (a > b) return 3;
	else return 0;
}

char GetWinner(bool draw)
{
	// �� ���� �ݵ�� ���� ���

	char ret = 'D';
	if (draw == false) return '-1';
	
	for (int i = 9; i >= 0; i--)
	{	
		if (GetPoint(aCards[i], bCards[i]) == 1) continue;
		else if (GetPoint(aCards[i], bCards[i]) == 3)
		{
			ret = 'A';
			break;
		}
		else if (GetPoint(aCards[i], bCards[i]) == 0)
		{
			ret = 'B';
			break;
		}		
	}
	return ret;
}

char GetWinner(int a, int b)
{
	char ret;
	if (a == b) ret = GetWinner(true);
	else if (a > b) ret = 'A';
	else ret = 'B';

	return ret;
}

int main()
{
	int aPoint = 0, bPoint = 0;
	aCards = InputCardArray();
	bCards = InputCardArray();

	for (int i = 0; i < 10; i++)
	{
		aPoint += GetPoint(aCards[i], bCards[i]);
		bPoint += GetPoint(bCards[i], aCards[i]);
	}

	cout << aPoint << " " << bPoint << endl;
	
	cout << GetWinner(aPoint, bPoint);

	return 0;
}