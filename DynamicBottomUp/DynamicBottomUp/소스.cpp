#include <iostream>
using namespace std;

int answer[50];
int main()
{
	
	//1ĭ�� ��� �ö󰡴� ����� ��
	answer[1] = 1;
	//2ĭ�� ��� �ö󰡴� ����� ��
	answer[2] = 2; //2����
	int n;
	cin >> n;
	// 1/ 2/ 3/ 5 
	for (int i=3; i <= n; i++)
	{

		answer[i] = answer[i - 1] + answer[i - 2];
	}
	cout << answer[n];

}