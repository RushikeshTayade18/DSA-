#include<iostream>
using namespace std;
class Sort
{
	int so[10];
	int n;
	public:
		void Accept();
		void Bubble_sort(Sort s);
		void Selec_sort(Sort s);
		void max_five(Sort s);
		void Display();
				
};
void Sort::Accept()
{
	cout<<"Enter how many Students you have \n";
	cin>>n;
	cout<<"Enter the Students Roll Numbers =\n";
	for(int i=0;i<=n-1;i++)
	{
		cin>>so[i];
	}
	
}
void Sort::Bubble_sort(Sort s)
{
	int temp;
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		   if(so[j]>so[j+1])
		   {
		   	temp=so[j];
		   	so[j]=so[j+1];
		   	so[j+1]=temp;
		   }	
	
	}
		cout<<"Students Roll No are Sorted using Bubble Sort as Follow\n";
		for(int i=0;i<n;i++)
		{
			cout<<so[i]<<"\t";
		}
	
}
void Sort::Selec_sort(Sort s1)
{
	int temp;
      
       for(int i=0;i<n-1;i++)
       {
       	for(int j=i+1;j<=n-1;j++)
       	{
       		if(so[i]>so[j])
       		{
       			temp=so[i];
       			so[i]=so[j];
       			so[j]=temp;
			   }
		   }
	   }
	   
	   cout<<"Student Roll No are Sorted using Selection Sort as Follow\n";
		for(int i=0;i<n;i++)
		{
			cout<<so[i]<<"\t";
		}
	
}

void Sort::max_five(Sort s1)
{
	for(int i=n-1;i>=n-5;i--)
	{
		cout<<so[i]<<"\t";
	}
}

void Sort::Display()
{
	
		cout<<"Array Elements are as Follow\n";
		for(int i=0;i<n;i++)
		{
			cout<<so[i]<<"\t";
		}	
		
}

int main()
{
	Sort s1;
	s1.Accept();
	int ch;
	char a;
	do
	{
	
	cout<<"1.Bubble Sort \n";
	cout<<"2.Selection Sort \n";
	cout<<"3. max five Elements \n";
	cout<<"4.Display \n";
	cout<<"Enter your choice \n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			s1.Bubble_sort(s1);
		break;
		case 2:
			s1.Selec_sort(s1);
		break;
		case 3:
			s1.max_five(s1);
			break;
		case 4:
			s1.Display();
			break;
		
		default :
			cout<<"Invalid Input \n";
	}
cout<<endl<<"do you want to contineu \n";
cin>>a;	
}
while(a=='Y'||a=='y');
	return 0;
	

}
