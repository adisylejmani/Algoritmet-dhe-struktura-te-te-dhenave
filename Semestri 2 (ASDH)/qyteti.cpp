//#include<iostream>
//#include<string>
//using namespace std;
//const int n = 10;
//class qyteti
//{
//private:
//	int kodi;
//	string emri;
//	int temp[n];
//public:
//	qyteti()
//	{
//		cout << "Jepni kodin: ";
//		cin >> kodi;
//		cout << "Jepni emrin: ";
//		cin >> emri;
//		cout << "Temperatura per 10 dite:\n";
//		for (size_t i = 0; i <n; i++)
//		{
//			cout << "dita " << i + 1 << ": ";
//			cin >> temp[i];
//		}
//	}
//	double mes()
//	{
//		int *p = temp;
//		int s = 0;
//		for (size_t i = 0; i < n; i++)
//		{
//			s = s + *(p + i);
//		}
//		return (double)s / n;
//	}
//	void kthe(int *m,int *k)
//	{
//		*m = 0;
//		*k = 0;
//		for (size_t i = 0; i < n; i++)
//		{
//			if (temp[i]>20)
//			{
//				(*m)++;
//			}
//			else if (temp[i]<10)
//			{
//				(*k)++;
//			}
//		}
//	}
//	void maxmin(int &max,int &min)
//	{
//		max = temp[0];
//		min = temp[0];
//		for (size_t i = 0; i < n; i++)
//		{
//			if (temp[i]>max)
//			{
//				max = temp[i];
//			}
//			if (temp[i]<min)
//			{
//				min = temp[i];
//			}
//		}
//	}
//};
//void main()
//{
//	qyteti q;
//	cout << "Mesatarja: " << q.mes() << endl;
//	int m, k;
//	q.kthe(&m, &k);
//	cout << "m= " << m << "dhe k=" << k<<endl;
//	int max, min;
//	q.maxmin(max, min);
//	cout << "Max=" << max << " min =" << min;
//
//}