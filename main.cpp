#include <iostream>
#include <fstream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	ifstream f;
	f.open("111.txt");
	int x;
	f>>x;
	f.close();
	cout<<x<<endl;
	if (x==0)
	{
		cout<<"error!"<<endl;
			system("pause");
		return 0;
	}
	while(x>=100)
	{
		cout<<"C";
		x-=100;
	}
	if (x>=90 && x<=99)
	{
		cout<<"XC";
		x-=90;
	}
	if (x>=50)
	{
		cout<<"L";
		x-=50;
	}
	if (x>=40&&x<=49)
	{
		cout<<"XL";
		x-=40;
	}
	while(x>=10)
	{
		cout<<"X";
		x-=10;
	}
	switch (x) 
	{
		case 9: 
		{
			cout<<"IX";
			break;
		}
		case 8: 
		{
			cout<<"VIII";
			break;
		}
			case 7: 
		{
			cout<<"VII";
			break;
		}	
			case 6: 
		{
			cout<<"VI";
			break;
		}
			case 5: 
		{
			cout<<"V";
			break;
		}
			case 4: 
		{
			cout<<"IV";
			break;
		}
			case 3: 
		{
			cout<<"III";
			break;
		}
			case 2: 
		{
			cout<<"II";
			break;
		}
			case 1: 
		{
			cout<<"I";
			break;
		}
			
	}
	cout<<endl;
	system("pause");
	return 0;
}
