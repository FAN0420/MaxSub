#include <iostream>
#include<stdio.h>
using namespace std;

int maxSub(int n, int a[]) 
{
	int maxSum = 0, Sum = 0, i;
	for (i = 0; i < n; i++) 
	{
		Sum += a[i];
		if (Sum>maxSum)
			maxSum = Sum;
		if (Sum < 0)
			Sum = 0;
	}
	return maxSum;
}
int main() 
{
	int n, Max, i, arr[100];
	cout << "���鵥Ԫ������" << endl;
	cin >> n;
	cout << "��������:" << endl;
	for (i = 0; i < n; i++)
		cin >> arr[i];
	Max = maxSub(n, arr);
	cout << "�����κ�:" << endl <<Max ;
	return 0;
}