#include <iostream>
using namespace std;



void merge(int a[], int left, int mid,int right)
{
	int sorted[15];
	int left1 = left, left2 = mid + 1;
	int i = left, j;
	
	//�� ����Ʈ�� ������ �� �������� sorted�� ����
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

	//�����ִ� ���Ҵ� ���� �����Ͽ� sorted�� ���� (���ĵȰ� ������ �������� ��ġ��)
	if (i <= right) //���Ұ� ����������
	{
		if (left1 <= mid) //���� ����Ʈ�� ����������
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
	//���ĵȰ� ���� a�� �ٽ� ����
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