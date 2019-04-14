//#include<iostream>
//#include<string>
//#include<limits>
//using namespace std;
//void llogarit(int A[],int n,bool &y1, int &y2, int &y3)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (A[i]<0)
//		{
//			y1 = true;
//			break;
//		}
//
//	}
//	int min = INT_MAX;
//	int max = INT_MIN;
//	int s = 0;
//	double mes;
//	for (int i = 0; i < n; i++)
//	{
//		if (A[i]>max)
//		{
//			max = A[i];
//		}
//		if (A[i]<min)
//		{
//			min = A[i];
//		}
//		y2 = max - min;
//		s = s + A[i];
//	}
//	mes = (double)s / n;
//	y3 = 0;
//	for (size_t i = 0; i < n ; i++)
//	{
//		if (A[i]>mes)
//		{
//			y3++;
//		}
//	}
//}
//void main()
//{
//	const int n = 5;
//	int A[n] = { 1,3,5,34,12 };
//	bool neg=false;
//	int dif;
//	int numr;
//	llogarit(A, n, neg, dif, numr);
//	cout << "Ka numra negativ: " << neg << endl;
//	cout<<"Diferenca ne mes max dhe min: "<<dif << endl;
//	cout<<"Numrat mbi mes: "<<numr << endl;
//}