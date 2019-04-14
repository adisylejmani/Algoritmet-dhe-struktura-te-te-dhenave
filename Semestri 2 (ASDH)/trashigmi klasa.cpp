//#include<iostream>
//using namespace std;
//class drejtkendeshi
//{
//private:
//	int a, b;
//public:
//	drejtkendeshi()
//	{
//		a = 2;
//		b = 3;
//
//	}
//	int siperfaqja()
//	{
//		return a * b;
//	}
//	int getA()
//	{
//		return a;
//	}
//	int getB()
//	{
//		return b;
//	}
//};
//
//class kuboidi:drejtkendeshi
//{
//private:
//	int c;
//public:
//	kuboidi():drejtkendeshi()
//	{
//		c = 4;
//	}
//	int siperfaqjaK()
//	{
//		int s=siperfaqja()*2+2*getA()*c+2*getB()*c;
//		return s;
//	}
//	int vellimi() 
//	{
//		return getA()*getB()*c;
//	}
//};
//void main()
//{
//	drejtkendeshi D;
//	kuboidi K;
//	cout << "Siperfaqja e drejtkendshit: " << D.siperfaqja ()<< endl;
//	cout << "Siperfaqja e kuboidit: " << K.siperfaqjaK() << endl;
//	cout << "Vellimi i kuboidit: " << K.vellimi() << endl;
//
//}