#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>

using namespace std;

// 31. źȭ���� ����
// ź�� 1���� ���� 12g, ���� 1���� ���� 1g�� ��, ��ƿ��(C2H4)�� ������ 28g�̰� ��ź(CH4)�� ������ 16g�̴�.
// ȭ�չ��� ������ ���ϴ� ���α׷�
// �Է� �� : źȭ���ҽ�
// ��� �� : �Է� ������ ���� źȭ���ҽ��� ����


int main()
{		
	int ret = 0;
	string str;
	cin >> str;

	string temp;
	int index_H = 1;
	if (str[1] == 'H') ret += 12;
	else
	{
		temp.clear();
		int i = 1;
		while (str[i] != 'H')
		{
			temp.push_back(str[i++]);			
		}
		index_H = i;
		ret += (stoi(temp) * 12);
	}	

	
	if (index_H == str.length() - 1) ret += 1;
	else 
	{
		temp.clear();
		int i = index_H+1;
		while (str[i] != '\0')
		{
			temp.push_back(str[i++]);
		}
		ret += stoi(temp);
	}


	cout << ret;

	return 0;
}