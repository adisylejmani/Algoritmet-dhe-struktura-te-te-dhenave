#include<iostream>
#include<string>;
#include<stdio.h>
using namespace std;
const int n=4;
class Era
{
private:
	string emri1;

	string emri;
	string mbiemri;
	int mosha;
	string dashniaqeekiperto;
	int rating[n];
	int martesa;

public:
	Era()
	{
		cout << "Emri: ";
		cin >> emri1;

		cout << "Emri i PERSONIT QE TA KA NDREQ JETEN: ";
		cin >> emri;
		cout << "Mbiemri i PERSONIT QE TA KA NDREQ JETEN: ";
		cin >> mbiemri;
		cout << "Mosha e PERSONIT QE TA KA NDREQ JETEN: ";
		cin >> mosha;
		cout << "Sa e don: ";
		cin >> dashniaqeekiperto;
		cout << "Kur ke me u martu me  Eren: ";
		cin >> martesa;
		
		cout << "rating per dates deri tash:\n";
		for (size_t i = 0; i < n; i++)
		{
			cout << "0." << i + 1 << ": ";
			cin >> rating[i];
		}
		
		
	}
	void mes()
	{
		cout << "Sa osht rating i dates: infinit/10 \nse sa her t rri me to osht sakt <3\n";
	}
	

};
void main()
{
	Era era;
	string mendimi;

	cout << "-----------------------------------\n";

	cout << "quick appreciation per bebin tem: ";
	cin >> mendimi;
	era.mes();
	
	
}