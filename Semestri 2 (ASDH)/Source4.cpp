//#include<iostream>
//#include<string>
//using namespace std;
//const int n = 5;
//const int z = 7;
//char zanore[z] = {'a','e','ë','i','u','o','y'};
//class aktori
//{
//private:
//	int id;
//	string emri;
//	string mbiemri;
//	int Nrroleve[n];
//public:
//	aktori()
//	{
//		cout << "id";
//		cin >> id;
//		cout << "emri";
//		cin >> emri;
//		cout << "mbiemri";
//		cin >> mbiemri;
//		cout << "Nr i roleve gjate viteve: \n";
//		for (size_t i = 0; i < n; i++)
//		{
//			cout << "viti " << i + 1 << ": ";
//			cin >> Nrroleve[i];
//		}
//
//	}
//	void kthe(double*m,int *s)
//	{
//		 *s=0;
//		for (size_t i = 0; i < n; i++)
//		{
//			*s = *s + Nrroleve[i];
//		}
//		*m=(double)*s / n;
//	}
//	int mbi3here()
//	{
//		int c = 0;
//		int *p=Nrroleve;
//		for (size_t i = 0; i < n; i++)
//		{
//			if (*(p+i)>3)
//			{
//				c++;
//			}
//		}
//		return c;
//	}
//	void nr_zanore(int &e)
//	{
//		e = 0;
//		for (size_t i = 0; i < emri.size(); i++)
//		{
//			for (size_t j = 0; j <z ; j++)
//			{
//				if (emri[i]==zanore[j])
//				{
//					e++;
//					break;
//					
//				}
//				
//			}
//		}
//	}
//};
//void main()
//{
//	aktori a;
//	double m; int s;
//	a.kthe(&m,&s);
//	cout << "shuma" << s << ", mesatarja" << m << endl;
//	cout << "sa her ka pasur me shum se 3 role brenda vitit: " << a.mbi3here() << endl;
//	int e;
//	a.nr_zanore(e);
//	cout << "nr i zanoreve: " << e << endl;
//}