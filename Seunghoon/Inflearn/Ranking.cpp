#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

#include <sstream>
#include <time.h>

using namespace std;

// 25. Ranking
// ���� ���ϱ�(���� ���� �Է��ϰ� �л��� ������ �Էµ� ������� ����ϴ� ���α׷�)
// �Է� �� : n�� ������ ����, �������� scoreList
// ��� �� : �Էµ� ���������� ������ ����Ѵ�


int main()
{
	int n;
	cin >> n;
	vector<int> scoreList(n);

	for (int i = 0; i < n; i++)
	{
		int score;
		cin >> score;
		scoreList[i] = score;
	}

	vector<int> sortedScores = scoreList;
	sort(sortedScores.begin(), sortedScores.end(), greater<>());

	unordered_map<int, int> scoreRankMap;
	for (int i = 0; i < n; i++)
	{
		scoreRankMap.insert({sortedScores[i], i+1});
	}

	for (int i = 0; i < n; i++)
	{	
		cout << scoreRankMap.at(scoreList[i]) << " ";
	}	

	return 0;
}