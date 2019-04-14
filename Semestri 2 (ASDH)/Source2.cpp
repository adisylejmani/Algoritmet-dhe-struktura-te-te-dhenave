//#include<iostream>
//#include<string>
//using namespace std;
//const int n = 12;
//class klienti
//{
//private:
//	int id;
//	string emri;
//	string mbiemri;
//	int gjendja12muaj[n];
//public:
//	klienti()
//	{
//		cout << "ID: ";
//		cin >> id;
//		cout << "Jepni emrin: ";
//		cin >> emri;
//		cout << "Jepni mbiemrin: ";
//		cin >> mbiemri;
//		cout << "Gjendja e blerjeve per 12 muaj: \n";
//		for (int i = 0; i < n; i++)
//		{
//			cout << "Muaji " << i + 1 << ": ";
//			cin >> gjendja12muaj[i];
//		}
//	}
//	double mes()
//	{
//		int s = 0;
//		int *p = gjendja12muaj;
//		for (size_t i = 0; i <n; i++)
//		{
//			s = s + *(p + i);
//		}
//		return (double)s / n;
//		
//	}
//	void kthe(int *m,int *v)
//	{
//		*v = gjendja12muaj[0];
//		*m = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (*v<gjendja12muaj[i])
//			{
//				*v = gjendja12muaj[i];
//				*m = i;
//			}
//		}
//	}
//	void inicialet(char &e,char &m)
//	{
//		e = emri[0];
//		m = mbiemri[0];
//	}
//};
//void main()
//{
//	klienti k;
//	cout << "mesatarja e llogaris per 12 muaj: " << k.mes ()<< endl;
//	int m, v;
//	int *pm, *pv;
//	pm = &m; pv = &v;
//	k.kthe(pm, pv);
//	cout << "muaji maks " << m +1<< " ka vleren: " << v << endl;
//	char e, d;
//	k.inicialet(e, d);
//	cout << "inicialet e klientit: " << e << "." << d << ".";
//}