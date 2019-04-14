//#include<iostream>
//#include<iomanip>
//using namespace std;
//const int n = 4;
//class kodi_cilik
//{
//private:
//	int kodi[n][n];
//public:
//	void fill()
//	{
//		int k = 0;
//		for (int j = 0; j < n; j++)
//		{
//			if (j%2==0)
//			{
//				for (int i = 0; i < n; i++)
//				{
//					kodi[i][j] = k;
//					k++;
//				}
//			}
//			else
//			{
//				for (int i = n - 1; i >= 0; i--)
//				{
//					kodi[i][j] = k;
//					k++;
//				}
//			}
//			
//		}
//	}
//	void shtyp()
//	{
//		cout << endl;
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				cout << setw(4) << kodi[i][j] ;
//			}
//			cout << endl;
//		}
//	}
//	void fjalet_kodike()
//	{
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				if ((j==0)||j==1)
//				{
//					cout << 0;
//				}
//				else
//				{
//					cout << 1;
//				}
//				if ((j==0)||(j==n-1))
//				{
//					cout << 0;
//				}
//				else
//				{
//					cout << 1;
//				}
//				if ((i==0)||(i==0))
//				{
//					cout << 0;
//				}
//				else
//				{
//					cout << 1;
//				}
//				if ((i==0)||(i==n-1))
//				{
//					cout << 0;
//				}
//				else
//				{
//					cout << 1;
//				}
//				cout << endl;
//			}
//			
//		}
//	}
//};
//void main()
//{
//	kodi_cilik k;
//	k.fill();
//	k.shtyp();
//	k.fjalet_kodike();
//}