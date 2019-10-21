#include<iostream>
using namespace std;
class Set
{
	int cri[20],bat[20],in[20],uni[20];
	int n1,n2,total,p,flag;
	
	public:
		void total1();
		void Accpet_cri();
		void Disp_cri();
		void Accept_bat();
		void Disp_bat();
		void Intersection();
		void unio();
		void dont_play();
};
void Set::total1()
{
	cout<<"Enter how many students you have \n";
	cin>>total;
}
void Set::Accpet_cri()
{
	cout<<"Enter how many student play cricket \n";
	cin>>n1;
	cout<<"Enter Students Roll no \n";
	for(int i=0;i<n1;i++)
	{
		cin>>cri[i];
	}
}
void Set::Disp_cri()
{
	cout<<"Student who plays cricket \n";
	for(int i=0;i<n1;i++)
	{
		cout<<cri[i]<<"\t";
	}
	cout<<"\n";
}

void Set::Accept_bat()
{
   cout<<"Enter how many student play batminton \n";
   cin>>n2;
   cout<<"Enter Student Roll no \n";	
   for(int i=0;i<n2;i++)
   {
   	cin>>bat[i];
   }
}

void Set::Disp_bat()
{
	cout<<"Student who plays batminton \n";
	for(int i=0;i<n1;i++)
	{
		cout<<bat[i]<<"\t";
	}
	cout<<"\n";
}

void Set::Intersection()
{
	int k=0;
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			if(cri[i]==bat[j])
			{
				in[k]=cri[i];
				k++;
			}
		}
	}
	cout<<"**********Intersection**********\n";
	for(int i=0;i<k;i++)
	{
		cout<<in[i]<<"\t";
	}
}
void Set::unio()
{
		int i,x,j,k;
	for(i=0;i<n1;i++)
	{
		uni[i]=cri[i];
	}
	x=i;
	for(j=0;j<n2;j++)
	{
		int flag=0;
		for(k=0;k<n1;k++)
		{
			if(bat[j]==cri[k])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			uni[x]=bat[j];
			x++;
		}
	}
	cout<<endl<<"************union ******************\n";
	for(int i=0;i<x;i++)
	{
		cout<<uni[i]<<" ";
	}cout<<endl;
	p=x;
}
void Set::dont_play()
{
	int dont=total-p;
	cout<<endl<<"The student that dont play \n"<<dont<<endl;
}
int main()
{
	Set s1;
	s1.total1();
	s1.Accpet_cri();
	s1.Accept_bat();
	s1.Disp_cri();
	s1.Disp_bat();
	s1.Intersection();
	s1.unio();
	s1.dont_play();
	return 0;
}
