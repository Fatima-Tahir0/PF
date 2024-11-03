#include<iostream>
using namespace std;
int main()
{
	int n1,n2;
	char opt;
	cout<<"Enter 1st number"<<endl;
	cin>>n1;
	cout<<"Enter 2nd number"<<endl;
	cin>>n2;
	cout<<"Enter opt"<<endl;
	cin>>opt;
	switch(opt)
	{
		case '+':
			cout<<n1+n2;
			break;
			case '-':
				cout<<n1-n2;
				break;
				case '*':
					cout<<n1*n2;
					break;
					case '/':
						cout<<n1/n2;
						break;
						default:
							cout<<"Invalid number";
							
	}
	return 0;
}