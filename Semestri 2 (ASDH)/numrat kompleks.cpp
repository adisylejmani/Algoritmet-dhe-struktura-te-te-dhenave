//#include<iostream>
//#include<string>
//#include<math.h>
//#include <sstream>
//#include<iomanip>
//using namespace std;
//class NR_kompleks {
//private:
//	string NK;
//	int Re;
//	int Im;
//	string eleminiHap()
//	{
//		string rez;
//		int k = NK.length();
//		for (int i = 0; i < k; i++)
//		{
//			if (NK[i]==' ')
//			{
//				continue;
//			}
//			else
//				rez = rez + NK[i];
//		}
//		return rez;
//	}
//public:
//	NR_kompleks()
//	{
//		
//		cout << "Jepni numrin kompleks: ";
//		cin >> NK;
//		/*NK = eleminiHap();*/
//		int h = -1;
//		int n = -1;
//		for (int i = 0; i < NK.size(); i++)
//		{
//			if (NK[i] == '+' || NK[i] == '-')
//			{
//				h = i;
//			}
//			if (NK[i] == 'i')
//			{
//				n = i;
//			}
//		}
//		string strRe= NK.substr(0,h);
//		stringstream sss(strRe);
//		sss >> Re;
//		string strIm = NK.substr(h + 1, n - h + 1);
//		stringstream ss(strIm);
//		ss >> Im;
//		if (NK[h]=='-')
//		{
//			Im = -Im;
//		}
//
//	}
//	void shtyp()
//	{
//		cout << "Pjesa reale: " << Re << endl;
//		cout << "Pjesa imagjinare: " << Im << endl;
//	}
//	double moduli()
//	{
//		return sqrt(Re*Re + Im * Im);
//	}
//	double argumenti() 
//	{
//
//		return atan((double)Im / Re);
//	}
//	void formaTrigonometrike()
//	{
//		cout << "z=" << setprecision(2) << fixed << moduli()
//			<< "(cos(" << setprecision(2) << fixed << argumenti ()
//			<< ")+isin(" 
//			<< setprecision(2) << fixed << +argumenti ()
//			<< "))\n";
//	}
//};
//void main()
//{
//	cout << "Kujdes punoni pa hapsira pasi programi nuk i njeh!!!\n";
//	NR_kompleks nk;
//	nk.shtyp();
//	cout << "Moduli: " <<setprecision(2)<<fixed <<nk.moduli() << endl;
//	cout << "Argumenti: " << setprecision(2) << fixed<< nk.argumenti() << endl;
//	nk.formaTrigonometrike();
//	
//}