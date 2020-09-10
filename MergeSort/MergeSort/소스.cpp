#include <iostream>
using namespace std;



void merge(int a[], int left, int mid,int right)
{
	int sorted[15];
	int left1 = left, left2 = mid + 1;
	int i = left, j;
	
	//두 리스트의 원소중 더 작은값을 sorted에 저장
	while (left1 <= mid && left2 <= right) {
		if (a[left1] <= a[left2])
		{
			sorted[i] = a[left1];
			i++;
			left1++;

		}
		else
		{
			sorted[i] = a[left2];
			i++; left2++;
		}
	}

	//남아있는 원소는 전부 복사하여 sorted에 저장 (정렬된것 위에서 정렬한후 합치기)
	if (i <= right) //원소가 남아있으면
	{
		if (left1 <= mid) //왼쪽 리스트가 남아있으면
		{
			for (j = left1; j <= mid; j++) {
				sorted[i] = a[j]; i++;
			}
		}
		else /*if(left2 <= right)*/
		{
			for (j = left2; j <= right; j++)
			{
				sorted[i] = a[j]; i++;
			}
		}
	}
	//정렬된것 전부 a에 다시 복사
	for (i = left; i <= right; i++) 
		a[i] = sorted[i];
}
void merge_sort(int a[], int left, int right) 
{
	int mid;
	if (left < right)
	{
		mid = (left + right) / 2;
		merge_sort(a, left, mid);
		merge_sort(a, mid + 1, right);
		merge(a, left, mid, right);
	}
}

void k(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i]<<" ";
}
int main()
{

	int arr[11] = { 10, 21, 3, 12, 15, 7, 32, 4, 25, 9,18 };
	/*for (int i = 0; i < 11; i++) {
		cout << arr[i] << " ";
	}*/
	//k(arr, 11);
	merge_sort(arr, 0, 10);
	k(arr, 11);
}