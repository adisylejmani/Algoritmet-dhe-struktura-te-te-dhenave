//#include<iostream>
//#include<string>
//using namespace std;
//const int n = 7;
//class Farat 
//{
//private:
//	char iniciali;
//	int kodi;
//	double sasia[n];
//public:
//	Farat()
//	{	
//		cout << "Jepni inicialin e fares: ";
//		cin >> iniciali;
//		cout << "Jepni kodin e fares: ";
//		cin >> kodi;
//		cout << "Sasia e fares: \n";
//		for (size_t i = 0; i < n; i++)
//		{
//			cout << "Dita " << i + 1 << " :";
//			cin >> sasia[i];
//		}
//	}
//	void shtyp()
//	{	
//		cout << iniciali << " - " << kodi << endl;
//	}
//	void shifra_kodi()
//	{
//		string skodi = to_string(kodi);
//		cout << "Nr i shifrave te kodit: " << skodi.size() << endl;
//	}
//	void shtypsasia()
//	{
//		cout << "[";
//		for (size_t i =0; i < n; i++)
//		{
//			cout << sasia[i] << " ";
//		}
//		cout << "]\n";
//	}
//	void rrit15()
//	{
//		for (size_t i = 0; i < n; i++)
//		{
//			sasia[i] = sasia[i] * 0.15+sasia[i];
//		}
//	}
//};
//void main()
//{
//	Farat f;
//	f.shtyp();
//	f.shifra_kodi();
//	f.shtypsasia();
//	f.rrit15();
//	f.shtypsasia();
//	
//}