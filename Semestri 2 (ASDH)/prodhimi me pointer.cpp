//#include<iostream>
//using namespace std;
//void calculate(int n,int *odd_product,int *factorial)
//{
//	*odd_product = 1;
//	*factorial = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		*factorial = *factorial*i;
//		if (i%2!=0)
//		{
//			*odd_product = *odd_product*i;
//		}
//	}
//}
//void main()
//{
//	int n = 6, op, f;
//	int *pop = &op,*pf=&f;
//	calculate(n, pop, pf);
//	cout << "Odd product: " << op << endl;
//	cout << "Factorial: " << *pf << endl;
//}