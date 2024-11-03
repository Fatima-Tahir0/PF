#include<iostream>
using namespace std;
int main()
{
	int a=123,b;
	int m_tries=3;
	int tries=0;
	do
	{
		cout<<"Enter the password"<<endl;
		cin>>b;
		tries++;
		if(a==b)
		{cout<<"The password is correct"<<endl;}
		else
		{cout<<"The password is incorrect"<<endl;}
	}
		while(a!=b && tries<m_tries);
	return 0;
}