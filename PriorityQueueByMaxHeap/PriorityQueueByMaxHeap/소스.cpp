#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int n;
	priority_queue<int> q;
	int flag = 1;
	while (flag)
	{
		cin >> n;
		switch (n) {
			case -1 :
				flag = 0;
				break;
			case 0:
				if (q.empty()) cout << "-1" << endl;
				cout << -q.top() << endl;
				q.pop();
				break;
			default:
				q.push(-n);
				break;
		}
	}
}