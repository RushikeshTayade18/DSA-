#include<iostream>
using namespace std;
class Search
{
	int a[10],n,ele,flag;
	public:
		void Accept();
		void Display();
		void linear();
		void sentinel();
		void Binary();	
};
void Search::Accept()
{
	cout<<"Enter how many elements \n";
	cin>>n;
	cout<<"Enter elements \n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void Search::Display()
{
	cout<<"Elmenets are as follow \n";
	for(int  i=0;i<n;i++)
	{
		cout<<a[i]<<"\t"<<endl;
	}
}
void Search::linear()
{
	flag=0;
	cout<<"Enter element to search the element \n";
	cin>>ele;
	for(int i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			flag=1;
			cout<<"Element is present at"<<i+1<<endl;
			break;
		}		
	}
	if(flag==0)
	{
		cout<<"Element  is not present \n";
	}
}
void Search::sentinel()
{
	int last;
	cout<<endl<<"Enter element to search \n";
	cin>>ele;
	last=a[n-1];
	a[n-1]=ele;
	
	int i=0;
	while(a[i]!=ele)
	{
		i++;
	}
	a[n-1]=last;
	
	if(i<n-1||ele==a[n-1])
	{
		cout<<"Element is present at "<<i+1<<endl;
	}
	else
	{
		cout<<"Element is not present \n";
	}
	
}

void Search::Binary()
{
	 int low,high,mid;
	 low=0;
	 high=n-1;
	 cout<<"Enter element to search \n";
	 cin>>ele;
	 flag=0;
	 while(low<=high)
	 {
	 	mid=(low+high)/2;
	 	if(ele==a[mid])
	 	{
	 		flag=1;
	 		cout<<"Element is present in the list at "<<mid+1;
	 		break;
		 }
		 else if(ele>a[mid])
		 {
		 	low=mid+1;
		 }
		 else
		 {
		 	high=mid-1;
		 }
	 }
	 if(flag==0)
	 {
	 	cout<<"Elenemt is not present in the list \n";
	 }
}

int main()
{
	Search s1;
	cout<<"********** Accept Elements ****************\n";
	s1.Accept();
	cout<<"********** Display Elements ***************\n";
	s1.Display();
	cout<<"*********** Linear Search *****************\n";
	s1.linear();
	cout<<"*********** Sentinel Search ****************\n";
	s1.sentinel(); 
	cout<<"************ Binary Search ******************\n";
	s1.Binary();
	return 0;
}





