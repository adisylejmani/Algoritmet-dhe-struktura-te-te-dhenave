//#include<iostream>
//using namespace std;
//
//void palindrom(int A[],int n,bool *rez)
//{
//	int *p = &A[0];// ose int *p=A;
//	int *b = &A[n - 1];
//	for (int i = 0; i < n/2; i++)
//	{
//		if (*(p+i)==*(b-i))
//		{
//			*rez = true;
//		}
//		else
//		{
//			*rez = false;
//			break;
//		}
//
//	}
//}
//void main()
//{
//	bool rez;
//	const int n = 5;
//	int A[n] = {33,5,1,5,3};
//	palindrom(A, n, &rez);
//	cout << "Vargu " ;
//	switch (rez)
//	{
//	case 1:
//		cout << "eshte palindrom ";
//		break;
//	case 0:
//		cout << "s'eshte palindrom ";
//		break;
//	default:
//		break;
//	}
//	
//
//}