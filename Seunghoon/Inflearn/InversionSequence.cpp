#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// 38. ���� ����(Inversion Sequence)
// ������ �־����� 1�տ� 1���� ū������ ����, 2�տ� 2���� ū������ ���� ... �� ��� ������ ���
// �Է� �� : n�� ������ ��, inversion sequence
// ��� �� : original sequence

vector<int> GetOriginalSequence(vector<int> originalSequence, int value, int order)
{
	vector<int> _originalSequence = originalSequence;
	vector<int>::iterator it = _originalSequence.begin();

	int seqeunceLength = originalSequence.size();
	
	if (seqeunceLength == 0) _originalSequence.push_back(order);
	else
	{
		int count = 0;
		for (int i = 0; i < seqeunceLength; i++)
		{
			int nextIdx = i + 1;
			if (value == 0)
			{
				it = _originalSequence.insert(it, order);
				break;
			}
			if (_originalSequence[i] > order) count++;
			if (value == count)
			{
				it = _originalSequence.insert(it + nextIdx, order);
				break;
			}
		}
	}

	return _originalSequence;
}

int main()
{
	int n;
	cin >> n;
	vector<int> inversionSequence(n);	
	vector<int> originalSequence;

	int temp = n + 1;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		inversionSequence[i] = num;		
	}
	
	for (int i = n-1; i >=0 ; i--)
	{
		originalSequence = GetOriginalSequence(originalSequence, inversionSequence[i], i+1);
	}

	for (auto num : originalSequence)
	{		
		cout << num << " ";
	}
	 
	return 0;
}



// ���� �ڵ�
/*
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	freopen("input.txt", "rt", stdin);
	int n, i, j, pos;
	scanf("%d", &n);
	vector<int> is(n + 1), os(n + 1);
	for (i = 1; i <= n; i++) {
		scanf("%d", &is[i]);
	}
	for (i = n; i >= 1; i--) {
		pos = i;
		for (j = 1; j <= is[i]; j++) {
			os[pos] = os[pos + 1];
			pos++;
		}
		os[pos] = i;
	}
	for (i = 1; i <= n; i++) {
		printf("%d ", os[i]);
	}
	return 0;
}
*/