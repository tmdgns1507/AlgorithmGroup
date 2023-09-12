#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// 37. Least Recently Used(īī�� ĳ�� ���� ����)
// ö���� ��ǻ�� ĳ�ø޸� ��� ��Ģ�� LRU�˰����� ������.
// ���� �ֱٿ� ������ ���� ���� �����ϴ� �˰����̴�. (���� 2 3 1 6 7 ������ 2�� ���� �ֱٿ� ���ΰ� 7�� ���� ���� ������ ���� ��)
// Cache Miss : �ؾ��� �۾��� ĳ�ÿ� ���� ���·� �� ���¿��� ���� ���ο� �۾��� 5�� �۾��� CPU�� ����ϸ� Cache miss�� �ǰ� ��� �۾��� �ڷ� �и��� 5�� �۾��� ĳ���� �� �տ� ��ġ�Ѵ� ���� 5 2 3 1 6 �� ��
// Cache Hit : �ؾ��� �۾��� ĳ�ÿ� �ִ� ���·� �� ���¿��� ���� 3�� �۾��� �Ѵٸ� Cache Hit�� �ǰ�, 6 3 �տ� �ִ� 5 2 �۾��� ��ĭ �ڷ� �̷�� 3���� �� ������ ��ġ��. ��, 3 5 2 1 6
// �Է� �� : ĳ���� ũ�� s, ĳ���� ���� n , ĳ�� ����Ʈ cacheList
// ��� �� : ���� �ֱٿ� ���� �۾����� ���ʷ� ���

int main()
{
	int n, s;
	cin >> s;
	cin >> n;
	vector<int> cacheList(n);
	vector<int> retList(s);

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		cacheList[i] = num;
	}

	int dest = n - s;
	for (int i = n - 1; i >= dest; i--)
	{
		bool isDuplicated = false;
		for (int num : retList)
		{
			if (cacheList[i] == num)
			{
				dest--;
				isDuplicated = true;
				break;
			}
		}
		if (isDuplicated == false)
		{
			retList.push_back(cacheList[i]);
			cout << cacheList[i] << " ";
		}	

	}


	return 0;
}