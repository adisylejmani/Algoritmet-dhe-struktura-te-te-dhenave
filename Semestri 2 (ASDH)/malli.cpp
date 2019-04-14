//#include<iostream>
//#include<string>
//using namespace std;
//class malli
//{
//private:
//	int kodi;
//	string emri;
//	double cmimi;
//public:
//	malli()
//	{
//		cout << "Jepni kodin e mallit: ";
//		cin >> kodi;
//		cout << "Jepni emrin e mallit: ";
//		cin >> emri;
//		cout << "Jepni cmimin e mallit: ";
//		cin >> cmimi;
//	}
//	void vendos(double par_cmimi)//set
//	{
//		cmimi = par_cmimi;
//	}
//	double merr()//get
//	{
//		return cmimi;
//	}
//	int numrimi()
//	{
//		int rez = 0;
//		string temp=to_string(kodi);
//		rez = temp.size();
//		return rez;
//	}
//	void shtyp()
//	{
//		string temp1 = "";
//		temp1=temp1  +emri.at(0);
//		temp1 = temp1 + "_";
//		temp1 = temp1 + to_string(kodi);
//		cout << "shkornja e par e mallit dhe kodi: " << temp1<<endl;
//	}
//};
//void main()
//{
//	malli m;
//	cout << "Nr i shifrave ne kod: " << m.numrimi() << endl;
//	m.shtyp();
//	m.vendos(0.45);
//	cout << "cmimi pas rritjes: " << m.merr();
//	
//}