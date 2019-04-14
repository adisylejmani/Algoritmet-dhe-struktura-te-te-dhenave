//#include<iostream>
//#include<string>
//using namespace std;
//const int n = 5;
//class train
//{
//private:
//	string destinacioni;
//	int nr_vagonave;
//	int nr_udhetimeve[n];
//public:
//	train()
//	{
//		cout << "Destinacioni i udhtimit: ";
//		cin >> destinacioni;
//		cout << "Nr i vagonave: ";
//		cin >> nr_vagonave;
//		cout << "Nr i udhtimeve per cdo dite: \n";
//		for (size_t i = 0; i < n; i++)
//		{
//			cout << "Udhtimet per diten " << i + 1 << ": ";
//			cin >> nr_udhetimeve[i];
//		}
//	}
//	void kthe(char *a,char *b)
//	{
//		*a = destinacioni[0];
//		*b = destinacioni[destinacioni.size() - 1];
//	}
//	void shtyp()
//	{
//		if (nr_vagonave%2==0)
//		{
//			cout << "NR i vagonave cift\n";
//		}
//		else
//		{
//			cout << "Nr i vagonave tek\n";
//		}
//	}
//	int numro()
//	{
//		int c = 0;
//		int *k = &nr_udhetimeve[0];	//ose *k=nr_udhtimeve;
//		for (size_t i = 0; i < n; i++)
//		{
//			if (*(k+i)>2)
//			{
//				c++;
//			}
//		}
//		return c;
//	}
//	void minmax(int &min,int &max)
//	{
//		min = nr_udhetimeve[0];
//		max = nr_udhetimeve[0];
//		for (size_t i = 0; i < n; i++)
//		{
//			if (nr_udhetimeve[i]>max)
//			{
//				max = nr_udhetimeve[i];
//			}
//			if (nr_udhetimeve[i]<min)
//			{
//				min = nr_udhetimeve[i];
//			}
//		}
//
//	}
//};
//void main()
//{
//	train t;
//	char start, end;
//	t.kthe(&start,& end);
//	cout << "Shkronja e pare dhe e fundit: " << start << ", " << end << endl;
//	t.shtyp();
//	cout << "NR i diteve me me shume se dy udhtime: " << t.numro() << endl;
//	int min, max;
//	t.minmax(min, max);
//	cout << "Vlera minimale dhe maksimale: " << min << ", " << max;
//
//}