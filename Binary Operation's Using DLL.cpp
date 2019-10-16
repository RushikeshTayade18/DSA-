#include<iostream>
using namespace std;
struct node 
{
	int data;
	node *pre;
	node *next;
};
class Binary
{
	node *head,*cn;
		int carry=0;
		
		
	public:
		int bits;
		Binary()
		{
			head=NULL;
		}
		void Create();
		void Display();
		void ones();
		void twos();
		void Addition(Binary b2,Binary b3);
		void Addi_disp();
		void extra();
};
void Binary::Create()
{
	
	cout<<endl<<"Enter how many bits you have \n";
	cin>>bits;
	
	for(int i=0;i<bits;i++)
	{
		node *nn;
		nn=new node;
		cout<<"Enter bits \n";
		cin>>nn->data;
		nn->next=NULL;
		nn->pre=NULL;
		
		
		if(head==NULL)
		{
			head=nn;
		}
		else
		{
			cn=head;
			while(cn->next!=NULL)
			{
				cn=cn->next;
			}
			cn->next=nn;
			nn->pre=cn;
		}
		
		
	}
	
}

void Binary::ones()
{
	cout<<endl<<"******* ones Complement as Follow *********\n";
	cn=head;
	while(cn!=NULL)
	{
		if(cn->data==1)
		{
			cn->data=0;
		}
		else
		{
			cn->data=1;
		}
		cn=cn->next;
	}
	
}

void Binary::Display()
{
	cn=head;
	while(cn!=NULL)
	{
		cout<<cn->data<<"";
		cn=cn->next;
	}
}



void Binary::twos()
{
	int carry=1;
	cn=head;
	
	cout<<endl<<"***** Twos Complement ******\n";
	while(cn->next!=NULL)
	{
		cn=cn->next;
	}
	while(cn!=NULL)
	{
		if(cn->data==1&&carry==1)
		{
			cn->data=0;
			carry=1;
		}
		else if(cn->data==1&&carry==0)
		{
			cn->data=1;
			carry=0;
			
		}
		else if(cn->data==0&&carry==1)
		{
			cn->data=1;
			carry=0;
		}
		else
		{
			cn->data=0;
			carry=0;
		}
		
		
		cn=cn->pre;
	}
}

void Binary::Addi_disp()
{
	cn=head;
	if(carry==1)
	{
		cout<<"1";
		while(cn!=NULL)
		{
			cout<<cn->data<<"\t";
			cn=cn->next;
		}
	}
	else
	{
		while(cn!=NULL)
		{
			cout<<cn->data<<"\t";
			cn=cn->next;
		}
	}
}


void Binary::Addition(Binary b2,Binary b3)
{
	b2.cn=b2.head;
	b3.cn=b3.head;
	int sum;

	while(b2.cn->next!=NULL)
	{
		b2.cn=b2.cn->next;
		
	}
	while(b3.cn->next!=NULL)
	{
		b3.cn=b3.cn->next;
	}
	while(b2.cn!=NULL||b3.cn!=NULL)
	{
		sum=(b2.cn->data+b3.cn->data+carry)%2;
		carry=(b2.cn->data+b3.cn->data+carry)/2;
		
		node *nn;
		nn=new node;
		nn->next=NULL;
		nn->pre=NULL;
		nn->data=sum;
		if(head==NULL)
		{
			head=nn;
		}
		else
		{
			nn->next=head;
			head->pre=nn;
			head=nn;
		}
		b2.cn=b2.cn->pre;
		b3.cn=b3.cn->pre;
	}
	
}

void Binary::extra()
{
	node *nn;
	nn=new node;
	
	nn->next=NULL;
	nn->pre=NULL;
	nn->data=0;
	
	head->pre=nn;
	nn->next=head;
	head=nn;
}

int main()
{
	int diff;
	Binary b1,b2,b3,b4;
	
	b1.Create();
	b1.Display();
	b1.ones();
	b1.Display();
	b1.twos();
	b1.Display();
	
	b2.Create();
	b3.Create();
	if(b2.bits>b3.bits)
	{
		diff=b2.bits-b3.bits;
		cout<<"Bit 2 Diff ="<<diff<<endl;
		for(int i=0;i<diff;i++)
		{
			b3.extra();
		}
	}
	else
	{
		diff=b3.bits-b2.bits;
		cout<<"Bit 1 Diff =\n"<<diff<<endl;
		for(int i=0;i<diff;i++)
		{
			b2.extra();
		}
	}
	
	
	b4.Addition(b2,b3);
	b4.Addi_disp();
	return 0;
}
