//#include<iostream>
//using namespace std;
//void llogaritje(int a,int b,int c,int *d,bool *e)
//{
//	*d = 0;
//	for (int i = a; i <= c; i++)
//	{
//		if (i%b!=0)
//		{
//			*d = *d + i;
//		}
//	}
//
//	*e = (a!=b) && (a!=c) && (b!=c);
//}
//void main()
//{
//	int d;
//	bool e;
//	llogaritje(3, 3, 7,&d,&e);
//	cout << "d=" << d<<endl;
//	cout << "e=" << e << endl;
//	cout << "adresa e d: " << &d << endl;
//	cout << "adresa e e: " << &e << endl;
//	*&d = -1;
//	cout << "d=" << d << endl;
//	cout << "adresa e d: " << &d << endl;
//}