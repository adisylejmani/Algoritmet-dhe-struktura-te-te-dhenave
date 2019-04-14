//#include<iostream>
//#include<string>
//using namespace std;
//const int a = 7;
//class telefoni
//{
//private:
//	string firma;
//	int kapaciteti;
//	int nrapp;
//	float perdorimi[a];
//public:
//	telefoni()
//	{
//		cout << "Firma e telefonit: ";
//		cin >> firma;
//		cout << "Kapaciteti i memories(GB) : ";
//		cin >> kapaciteti;
//		cout << "Nr i aplikacioneve ne telefon: ";
//		cin >> nrapp;
//		cout << "Perdorimi i telefonit per nje jave: \n";
//		for (int i = 0; i < a; i++)
//		{
//			cout << "Dita " << i + 1 << " :";
//			cin >> perdorimi[i];
//		}
//	}
//	void mesfund(char *m,char *f)
//	{
//		*m = firma[firma.size() / 2];
//		*f = firma[firma.size() - 1];
//	}
//	int numrimi()
//	{
//		int c = 0;
//		float *p = perdorimi;
//		for (size_t i = 0; i < a; i++)
//		{
//			if (*(p+1)>1.5)
//			{
//				c++;
//			}
//		}
//		return c;
//	}
//	void maxmin(float &max,float &min)
//	{
//		max = perdorimi[0];
//		min = perdorimi[0];
//		for (size_t i = 0; i < a; i++)
//		{
//			if (perdorimi[i]>max)
//			{
//				max = perdorimi[i];
//			}
//			if (perdorimi[i]<min)
//			{
//				min = perdorimi[i];
//			}
//		}
//	}
//
//};
//void main()
//{
//	telefoni t;
//	char m, f;
//	t.mesfund(&m,&f);
//	cout << "shkornja e mesit " << m << ", shkronja e fundit " << f << endl;
//	cout << "Ditet qe eshte perdorur telefoni me shume se 1.5 " << t.numrimi() << endl;
//	float max, min;
//	t.maxmin(max, min);
//	cout << max << " dhe " << min;
//}