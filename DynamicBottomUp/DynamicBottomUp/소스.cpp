#include <iostream>
using namespace std;

int answer[50];
int main()
{
	
	//1칸의 계단 올라가는 방법의 수
	answer[1] = 1;
	//2칸의 계단 올라가는 방법의 수
	answer[2] = 2; //2가지
	int n;
	cin >> n;
	// 1/ 2/ 3/ 5 
	for (int i=3; i <= n; i++)
	{

		answer[i] = answer[i - 1] + answer[i - 2];
	}
	cout << answer[n];

}