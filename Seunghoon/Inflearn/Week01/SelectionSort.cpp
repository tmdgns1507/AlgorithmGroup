#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// 32. ��������
// N���� ���ڰ� �ԷµǸ� ������������ �����Ͽ� ����ϴ� ���α׷�
// �Է� �� : �ڿ��� n , �ڿ�������Ʈ nList
// ��� �� : ������������ ���ĵ� �ڿ��� ����Ʈ ���


int main()
{
	int n;	
	cin >> n;
	vector<int> nList(n);	

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		nList[i] = num;
	}
	
	//���̺귯�� ���
	//sort(nList.begin(), nList.end());

	//// ��������
	//for (int i = 0; i < n-1; i++)
	//{
	//	for (int j = i+1; j < n; j++)
	//	{
	//		if (nList[i] > nList[j])
	//		{
	//			int tmp = nList[i];
	//			nList[i] = nList[j];
	//			nList[j] = tmp;
	//		}
	//	}
	//}
	
	// ��������
	for (int i = 0; i < n-1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n; j++)
		{
			if (nList[j] < nList[min]) min = j;
		}
		swap(nList[min], nList[i]);
	}

	for (int num : nList)
	{
		cout << num << " ";
	}

	return 0;
}