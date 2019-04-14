#include<iostream>
#include<string>
using namespace std;
const int n = 5;
class puntori {
private:
	int id;
	string emri;
	int pagat[n];
public:
	puntori()
	{
		cout << "Id: ";
		cin >> id;
		cout << "emri: ";
		cin >> emri;
		cout << "pagat:\n";
		for (size_t i = 0; i < n; i++)
		{
			cout << "muaji " << i + 1 << ": ";
			cin >> pagat[i];

		}
	}
	double mes()
	{
		int*p = pagat;
		int s = 0;
		for (size_t i = 0; i < n; i++)
		{
			s = s + *(p + i);

		}
		return (double)s / n;
	}
	void kthe(int *max, int *min)
	{
		*max = pagat[0];
		*min = pagat[0];
		for (size_t i = 0; i < n; i++)
		{
			if (pagat[i]>*max)
			{
				*max = pagat[i];
			}
			if (pagat[i]<*min)
			{
				*min = pagat[i];
			}
		}
	}
	void mes(int &m1,int &m2)
	{
		m1 = (double)(pagat[0] + pagat[1])/2;
		m2 = (double)(pagat[n - 1] + pagat[n - 2]) / 2;
	}
};
void main()
{
	puntori p;
	cout << "Mes=" << p.mes() << endl;
	int max, min;
	p.kthe(&max, &min);
	cout << "max: " << max << ", min: " << min << endl;
	int m1, m2;
	p.mes(m1, m2);
	cout << "m1=" << m1 << ", m2=" << m2;
};
