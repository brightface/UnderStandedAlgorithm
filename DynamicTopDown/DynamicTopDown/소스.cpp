#include <iostream>
using namespace std;

//TopDown - backtracking, (memorization)
//backtracking 하고 bottomup이 중요하네. bottomup 방식이중요

int dy[50];
int Dfs(int n)
{	
	//memoryzition//SpeedUp
	if (dy[n] > 0) return dy[n];
	
	if (n == 1 || n == 2) return n;
	else
		return dy[n] = Dfs(n - 1) + Dfs(n - 2);
}
int main()
{	
	int n;
	ios_base::sync_with_stdio(false);
	cin >> n;
	cout<<Dfs(n);
}