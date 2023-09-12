#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// 30. 3�� ������(large)
// �ڿ��� N�� �ԷµǸ� 1���� N������ �ڿ��� �� 3�� �� ������ ���ϴ� ���α׷�(3<=n<=1b)
// �Է� �� : n�� ���� ��
// ��� �� : n������ �ڿ��� �� 3�� ����


int main()
{
	// ���� �ڸ����� ���� cur
	// ���� �ڸ����� ������ left , �������� right, k�� ���� �ڸ���

	int n, left = -1, right, cur, k = 1, count = 0;
	cin >> n;

	while (left != 0)
	{
		left = n / (k * 10);
		cur = (n / k) % 10;
		right = n % k;

		if (cur > 3) count += ((left + 1) * k);
		else if (cur < 3) count += (left * k);
		else count += ( (left * k ) + right+1);
		k *= 10;
	}

	cout << count;

	return 0;
}




// �߸� ǰ
//int GetPowerOfNum(int num)
//{
//	int power = 0;	
//
//	while (num >= 10)
//	{
//		power++;
//		num /= 10;
//	}
//
//	return power;
//}
//
//int GetCount(int power)
//{
//	return power * pow(10, power - 1);
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	int cnt = 0;
//		
//	while (n > 10)
//	{
//		int power = GetPowerOfNum(n);
//		cnt += GetCount(power);
//		n -= pow(10, power);
//	}
//
//	if (n > 3) cnt++;
//
//	cout << cnt;
//
//	return 0;
//}