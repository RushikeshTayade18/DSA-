#include<iostream>
using namespace std;
class Sentinel
{
	int a[10],n;
	public:
		void Accept();
		void cal();
		void Display();
};
void Sentinel::Accept()
{
	cout<<"Enter Total Elements \n";
	cin>>n;
	cout<<"Enter Elements \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
}


void Sentinel::cal()
{
	int ele;
	int last=a[n-1];
	cout<<endl<<"Enter the element to find \n";
	cin>>ele;
	
	a[n-1]=ele;
	int i=0;
	while(a[i]!=ele)
	{
		i++;
	}
	
	a[n-1]=last;
	
	if(i<n-1||ele==a[n-1])
	{
		cout<<"Element is present \n";
	}
	else
	{
		cout<<"Element is not present \n";
	}
}


void Sentinel::Display()
{
	cout<<"Array Elements \n";
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}

int main()
{
	Sentinel s1;
	s1.Accept();
	s1.Display();
	s1.cal();
	
	return 0;
}


