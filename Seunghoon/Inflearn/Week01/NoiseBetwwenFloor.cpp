#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// Noise Between Floors
// �ִ� �������� �︰ �溸�� Ƚ��
// �Է� �� cnt: Ƚ��, limit: �溸�� �︱ ��ġ, n���� �溸����ġ
// ��� �� : �ִ� �溸�� Ƚ��


int main()
{
	int limit, cnt, ret = 0, tmp = 0;		
	cin >> cnt >> limit;			

	for (int i = 0; i < cnt; i++)
	{
		int alarm;		
		cin >> alarm;
		
		if (alarm > limit) tmp++;
		else tmp = 0;

		if (tmp > ret) ret = tmp;
	}	
	
	if (ret == 0) ret = -1;

	cout << ret;

	return 0;
}