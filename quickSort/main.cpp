#include <iostream>
#include <algorithm>
using namespace std;
int n;
int arr[5];

int partition(int left, int right)
{
	
	int low = left; //do while������ ���� -1 ���ֱ� ������ ���� �������� �ʴ´�.
	int high = right+1; //do while������ 1��������Ѵ�. ���� �����ϱ�

	int pivot = arr[left];
	
	do {
		 do
		{
			low++;
		}while(low <= right && arr[low] < pivot);
		
		do
		{
			high--;
		} while (high >= left && arr[high] > pivot);
		
		if(low < high) swap(arr[low], arr[high]);//������ ���� �ٲ���
	} 
	while (low < high);
	swap(arr[left], arr[high]);

	return high;

}

void quickSort(int left, int right)
{
	if (right <= left) {
		return;
	}
	else {
		int q = partition(left, right);
		quickSort(left, q - 1);
		quickSort(q + 1, right);
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	//sort(arr,arr+5);
	quickSort(0, n-1);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

}