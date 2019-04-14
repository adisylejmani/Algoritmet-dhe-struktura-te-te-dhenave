//#include<iostream>
//#include<string>
//using namespace std;
//const int n = 4;
//class ora_mesimore
//{
//public:
//	string lenda;
//	int kohe_zgjatja;
//	bool ligj_usht;
//};
//class orari	
//{	
//private:
//	ora_mesimore oret[n];
//	char semestri;
//public:
//	orari()
//	{
//		cout << "Caktoni semestrin(V/D): ";
//		cin >> semestri;
//		cout << "Jepni shennimet per oret mesimore\n";
//		for (int i = 0; i < n; i++)
//		{
//			cout << "Cakto lenden: ";
//			cin >> oret[i].lenda;
//			cout << "Sa zgjat ora ne " << oret[i].lenda << " :";
//			cin >> oret[i].kohe_zgjatja;
//			cout << "Ligjerata apo Ushtrime ? ";
//			cin >> oret[i].ligj_usht;
//		}
//	}
//	int llogarit()
//	{
//		int tot = 0;
//		for (int i = 0; i < n; i++)
//		{
//			tot = tot + oret[i].kohe_zgjatja;
//		}
//		return tot;
//	}
//	int max()
//	{
//		int max = oret[0].kohe_zgjatja;
//		for (size_t i = 0; i < n; i++)
//		{
//			if (oret[i].kohe_zgjatja>max)
//			{
//				max = oret[i].kohe_zgjatja;
//			}
//		}
//		return max;
//	}
//	void shtyp()
//	{	
//		int m = max();
//		cout << "\nLista  e lendeve me nr maximal te lendeve:\n";
//		for (int i = 0; i <n; i++)
//		{
//			if (oret[i].kohe_zgjatja==m)
//			{
//				cout << oret[i].lenda << endl;
//			}
//		}
//	}
//};
//void main()
//{
//	orari o;
//	cout << "Shuma totale e oreve: " << o.llogarit() << endl;
//	o.shtyp();
//}