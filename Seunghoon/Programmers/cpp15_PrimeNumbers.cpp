#include <iostream>
#include <cmath>

using namespace std;

// cpp algorithm
// 15. �Ҽ��� ����
// �ڿ��� N�� �ԷµǸ� 1���� N������ �Ҽ��� ������ ����ϴ� ���α׷��� �ۼ��ϼ���. ���� 20�� �ԷµǸ� 1���� 20������ �Ҽ��� 2,3,5,7,11,13,17,19�� �� 8�� �Դϴ�. ���ѽð��� 1���Դϴ�.


int main(){
	// txt���� �о�ͼ� ����� �� 
	//freopen("input.txt", "rt", stdin);
	int n;
	int count = 0;
	bool isPrimeNum = true;			
	cin >> n;
	
	for(int i=2; i<=n; i++)
	{
		isPrimeNum = true;
		
		for(int j=2; j*j<=i; j++)
		{
			if(i%j==0)
			{
				isPrimeNum = false;
				break;
			}
		}
		
		if(isPrimeNum == true) count++;
	}
	
	cout << count << endl;
	return 0;
}
