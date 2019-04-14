//#include<iostream>
//#include<math.h>
//using namespace std;
//void llogarit(int X[],int n,bool *a1,int *a2)
//{
//	*a1 = true;
//	for (int i = 0; i < n / 2; i++)
//	{
//		if (X[i] != X[n - 1 - i])
//		{
//			*a1 = false;
//			break;
//		}
//	}
//	 *a2 = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (X[i]%2==0)
//		{
//			(*a2)++;
//		}
//	}
//}
//void main()
//{
//	const int n = 5;
//	int X[n] = { 4,3,1,5,43 };
//	int *pa = X;
//
//	for (int i = 0; i < n; i++)
//	{
//		cout << pa + i << endl;
//		*(pa+i) = pow(2, i);
//		cout << X[i] << endl;
//	}
//	bool a1;
//	int a2;
//	llogarit(X, n, &a1, &a2);
//	cout << "a1= " << a1 << " dhe a2= " << a2;
//}