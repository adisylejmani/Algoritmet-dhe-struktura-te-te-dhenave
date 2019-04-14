//#include<iostream>
//#include<limits>
//using namespace std;
//const int n = 5;
//class vargu
//{
//protected:
//	int p1,p2;
//	int A[n] = { 34,2,4,-12,57 };
//public:
//	vargu()
//	{
//		cout << "Jepni pozitat: ";
//		cin >> p1>>p2;
//	}
//	int min()
//	{
//		int m = A[0];
//		for (int i = 1; i < n; i++)
//		{
//			if (A[i]<m)
//			{
//				m = A[i];
//			}
//		}
//		return m;
//	}
//	void ndrrimi()
//	{
//		int c;
//		c = A[p1-1];
//		A[p1 - 1] = A[p2 - 1];
//		A[p2 - 1] = c;
//	}
//	void shtyp()
//	{
//		for (int i = 0; i < n; i++)
//		{
//			cout << A[i] << " ";
//		}
//	}
//};
//class vargu_gjer:public vargu
//{
//private:
//	int kufizuesi;
//public:
//	vargu_gjer():vargu()
//	{
//		cout << "Jepni kufizuesin: ";
//		cin >> kufizuesi;
//	}
//	int max()
//	{
//		int max =INT_MIN;
//		for (int i = 0; i < n; i++)
//		{
//			if (A[i]>max && A[i]<=kufizuesi)
//			{
//				max = A[i];
//			}
//		}
//		return max;
//	}
//};
//void main()
//{
//	vargu_gjer vgj;
//	vgj.shtyp();
//	cout << "vlera minimale e vargut: " << vgj.min() << endl;
//	cout << "vlera maksimale e vargut: " << vgj.max() << endl;
//	vgj.ndrrimi();
//	vgj.shtyp();
//}